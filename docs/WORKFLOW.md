# 刷题与记录工作流

本项目的目标是把“选题 → 编码 → 本地验证 → 记录 → 间隔复习”压缩成一条很短的路径。
所有命令都从仓库根目录执行。

## 1. 每天开始

```bash
make today
```

它会先列出到期复习，再按热题 100 的学习顺序推荐下一道未完成题。可以筛选专题或难度：

```bash
make today CHAPTER=二分查找
make next DIFFICULTY=EASY
make next CHAPTER=动态规划 RANDOM=1
```

查看完整进度或筛选题目：

```bash
make stats
make list STATUS=REVIEW
make list CHAPTER=链表
make list QUERY=window
make show ID=76
```

题号、中英文题名和文件名片段都可以作为工具里的题目标识；Make 快捷命令推荐直接使用题号。

## 2. 开始与运行

```bash
make start ID=283
make run ID=283
```

`start` 会把 `TODO` 改为 `DOING` 并同步文档。题解文件已带本地断言；在 `LOCAL` 模式下，
`common/leetcode.hpp` 会提供 LeetCode 平台通常预置的数据结构。

遇到越界、悬空指针或未定义行为时：

```bash
make debug ID=206
```

## 3. 完成后记录

独立完成：

```bash
make done ID=283 CONFIDENCE=4 MINUTES=25 NOTE="双指针覆盖后补零"
```

借助提示、需要重做、重点题：

```bash
make hint ID=15 CONFIDENCE=2 NOTE="去重边界仍不熟"
make review ID=42 CONFIDENCE=1 NOTE="左右最大值关系没想清"
make star ID=76 CONFIDENCE=3 NOTE="滑窗收缩条件很典型"
```

参数都可选：

- `CONFIDENCE=1..5`：当前脱离答案独立写出的把握。
- `MINUTES=数字`：本次实际投入时间。
- `NOTE="一句话"`：下次复习前最值得看到的提醒。
- `DATE=YYYY-MM-DD`：补录过去的学习记录。

完成状态默认按信心 `3` 在 7 天后安排复习。提供信心分后，间隔为：

| 信心 | 下次复习 |
|---:|---:|
| 1 | 1 天后 |
| 2 | 3 天后 |
| 3 | 7 天后 |
| 4 | 14 天后 |
| 5 | 30 天后 |

## 4. 复习

```bash
make reviews
make reviewed ID=283 CONFIDENCE=5 MINUTES=8 NOTE="一次写对"
```

`reviewed` 保留当前状态，更新信心分、复习次数和下次日期。若要在复习后改变状态：

```bash
make reviewed ID=283 CONFIDENCE=5 STATUS=STAR
```

只追加一句笔记，不改变状态和排期：

```bash
make note ID=283 NOTE="快指针指向下一个待写位置"
```

自动复习清单和最近 30 条记录位于 [`../notes/review.md`](../notes/review.md)；
完整历史保存在 `data/progress.json`。

## 5. 提交前检查

```bash
make check
make test
```

或者一次完成：

```bash
make verify
```

`check` 会验证：

- 题单恰好包含 100 道且题号、路径不重复；
- 每个 `cpp` 文件都被目录收录；
- 题解中的链接、专题和难度与题目目录一致；
- 进度字段与日期合法；
- 题解头部、README 和复习清单已同步。

`test` 只编译并运行 `HINT / DONE / REVIEW / STAR` 状态的题目，不会因尚未填写的 `TODO`
骨架而失败；执行前还会先运行记录工具的单元测试。

## 6. 数据与手工编辑

- `data/problems.json`：题目稳定信息和学习顺序。增删、改名或移动题目时修改。
- `data/progress.json`：个人状态和历史。日常应由工具修改。
- `cpp/**.cpp` 顶部 Review 字段：由进度数据生成，便于编码时查看。
- `README.md` 当前进度区、`notes/review.md`：自动生成。

若手工修改导致不同步：

```bash
make sync
```

注意：同步方向始终是 `data/ → 题解头部与文档`，因此不要只在自动字段里更新进度。

## 7. 直接使用工具

Makefile 覆盖了最常用路径。需要更细筛选时可以查看完整帮助：

```bash
python3 tools/leetcode.py --help
python3 tools/leetcode.py list --help
python3 tools/leetcode.py record --help
```
