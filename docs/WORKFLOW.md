# 刷题与记录工作流

本项目的目标是把“选题 → 编码 → 本地验证 → 记录 → 间隔复习”压缩成一条很短的路径。
所有命令都从仓库根目录执行。

## 多题单

`today`、`next`、`list`、`stats` 默认使用 `data/workspace.json` 中的当前题单，初始为 Hot 100。
可以用 `PLAN=hot100`、`PLAN=lingcha-sliding-window` 或 `PLAN=all` 覆盖单次查询。
`reviews` 支持同样的筛选，默认使用全库；`notes/review.md` 也汇总全库复习。
题单各自维护章节与顺序，同一题共用代码、状态和复习历史；记录命令继续只用题号。

```bash
make list PLAN=lingcha-sliding-window
make next PLAN=lingcha-sliding-window CHAPTER=§1
make list PLAN=lingcha-sliding-window CHAPTER=§2.4
make reviews PLAN=lingcha-sliding-window
make stats PLAN=all
make run ID="LCP 68"
make show ID="面试题 16.06"
```

已收录 13 份灵神题单，题单列表、难度分覆盖和环境数量可用 `make plans` 查看。
滑动窗口题单完整收录六个大章，包括进阶、思维扩展和相似题目。
来源和快照范围记录在 [`../data/plans/lingcha-sliding-window.json`](../data/plans/lingcha-sliding-window.json)：
284 个章节条目，277 道去重题目，241 道免费题有本地环境，36 道会员题仅收录索引。
跨小节的重复题保留全部归属，总进度和复习队列按题号去重；筛选后恢复该小节原来的题目顺序。

`path: null` 表示尚未准备代码，`paid_only: true` 表示会员题，两个属性独立。`metadata_verified: false` 表示公开元数据尚未核对，
此时 `paid_only: null` 表示权限未知，不能当成免费题。用 `make pending PLAN=all` 查看待准备清单。
会员题和没有代码的题目仍显示在题单中，但不会被 `next` 推荐；尝试 `run` 时会给出原因。
统计分别显示免费题与会员题进度，以及已准备代码数量。

新增题目时，在 `data/problems.json` 收录一次，并在 `data/progress.json` 初始化 TODO 记录；
题单 `items` 引用已有题号，不复制代码和进度。同一题可以出现在不同章节，同一章节不能重复收录。
目录的 `order` 保留为全库顺序，题单学习顺序由 `items` 数组决定。
普通题号可以使用整数；`LCP 68`、`LCR 180`、`面试题 16.06` 使用字符串。含空格的编号需要 shell 引号。

准备环境时填写准确的 LeetCode 函数签名，在 `LOCAL` 下添加官方样例断言和适用的边界用例，保留未完成解法。
原地修改题检查修改后的数组或有效前缀；允许任意答案的题目检查合法性，不能强制等于某一个样例答案。
非 void 函数暂时返回占位值以避免未定义行为，断言失败是预期结果，不能据此记录完成。
核对过的接口和用例保存在 `data/environments/`。全库当前收录数量和环境覆盖由 README 的题单总览自动展示；
其余题目仍需核对会员权限、官方接口与样例。题单收录完整不代表所有环境已完成。

```bash
make prepare PLAN=lingcha-sliding-window    # 补建缺失文件，已有代码不覆盖
make skeletons PLAN=lingcha-sliding-window  # C++20 编译所有已准备环境，不运行 TODO 解法
make sync
make check
make verify
```

接口或样例规格变更后，已有解法文件需要人工审阅再调整，`prepare` 不会覆盖它们。
修改工具工作流后运行 `make verify`；新增或调整骨架时另运行对应题单的 `make skeletons`。

## 训练与难度分筛选

```bash
make plans
make use PLAN=lingcha-sliding-window
make next TRAIN=basic FREE=1 MAX_RATING=1700
make list TRAIN=advanced MIN_RATING=1700 MAX_RATING=2000
make list UNRATED=only FREE=1
make stats TRAIN=basic FREE=1 MAX_RATING=1700
make today TRAIN=basic FREE=1 MAX_RATING=1700
```

`make use` 只修改当前题单设置，不修改题目状态、日期和学习历史。切换后不用重复输入 `PLAN`；
显式 `PLAN=...` 优先于当前设置。README 的 Hot 100 进度和全库复习文档不会随当前设置切换。
`reviews` 仍默认汇总全库，`skeletons` 仍默认检查 Hot 100，`prepare` 默认使用灵神环境规格。

| 参数 | 含义 |
|---|---|
| `TRAIN=all/basic/advanced` | 全部／常规主线／原题单明确的进阶、选做、扩展或相似题目 |
| `FREE=1` | 只看免费题；下一题推荐始终跳过会员题和未准备代码的题目 |
| `MIN_RATING`、`MAX_RATING` | 难度分范围，包含上下边界，不能用 Easy/Medium/Hard 代替 |
| `UNRATED=separate` | 默认：列表单独展示未标分题，带分数范围的推荐和统计不纳入它们 |
| `UNRATED=include` | 显式把未标分题也纳入候选；它们的分数仍未知 |
| `UNRATED=exclude` | 完全排除未标分题 |
| `UNRATED=only` | 只看未标分题，不能同时指定分数范围 |

基础训练表示常规主线，不保证题目简单；需要更具体范围时组合章节、官方难度和难度分条件。
训练阶段在题单 `items.stage` 中维护，可按个人路线调整。同题可以在一个小节属于主线，在另一个小节属于扩展；
章节和训练阶段必须在同一条归属上匹配，避免交叉分类导致误选。

难度分来自题单的明确标注。同题其他题单提供一致分数时，Hot100 和基础算法精讲也可复用；显示分数时附带来源题单。
当前题单明确标注的分数优先；外部来源冲突且当前题单未标分时，保持未知。原始 items.rating 不会被复用结果改写。
最新覆盖数量用 `make plans` 查看，不会把未知当成 0，也不会给没有分数的题估分。
默认列表按已标分／未标分分组，组内保留学习顺序；下一题推荐保持筛选后的原始顺序。
`today` 的训练条件只影响新题推荐，已有到期复习不会因分数、阶段或免费题筛选而消失。

实际刷题时先用 `make next` 选题，再执行 `make start ID=...`、填写算法、`make run ID=...`，
最后根据实际学习结果记录完成或提示状态。工具测试在临时副本模拟记录，不会替你完成题目。

## 1. 每天开始

```bash
make today
```

它会先列出当前题单的到期复习，再按当前题单的学习顺序推荐下一道未完成题。可以筛选专题或难度：

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

## 分批补齐公开题目环境

维护工具先保存公开来源快照，再提取题目链接。对缺失元数据分批读取，遇到验证页、限流或网络错误立即停止；缓存成功的题目可继续接入。

```bash
python3 -m tools.import_lingcha --sources-dir /tmp/lingcha-sources --cache-dir /tmp/lingcha-questions --scan
python3 -m tools.cache_questions --cache-dir /tmp/lingcha-questions --limit 100
python3 -m tools.import_lingcha --sources-dir /tmp/lingcha-sources --cache-dir /tmp/lingcha-questions --apply --allow-pending
python3 -m tools.prepare_cached_questions --cache-dir /tmp/lingcha-questions
make sync
make check
```

缓存目录需要事先由来源扫描生成 `plan-references.json`。`--allow-pending` 仅允许保留待核对索引，不会把权限未知的题当成免费题。候选环境必须通过 C++20 编译才登记路径；解析失败或缺少专用适配与性质断言时，列入待适配清单。已有代码保持原样，新增题目保留 TODO。README 总览和各题单文档会在 `make sync` 时更新。

基础算法精讲的题单页面提供对应课程的“观看”链接；`make show ID=...` 和下一题推荐也显示关联视频。链接与题目的章节归属一起保存。

按题号运行时默认最多执行 30 秒，超时会终止进程并报错，学习记录保持原样。可用 `make run ID=... TIMEOUT=60` 或 `make debug ID=... TIMEOUT=60` 调整运行上限；此上限不包含编译时间。`make verify` 对每道已完成题也设有 30 秒运行上限。

随机接口题的本地断言检查返回值的合法范围、集合成员、黑名单排除、点的几何范围和翻转状态；这些检查不证明均匀或加权概率分布。`rand10()` 环境提供仅供 LOCAL 使用的 `rand7()` 模拟器，题目中的 n 是本地调用次数，不是函数参数。算法仍需自己实现，不能仅凭这些断言通过就记录完成。

## 特殊平台接口

链表和树的“目标节点”参数在本地从原结构定位，不能新建一个同值节点代替；克隆树题检查返回节点来自克隆树。N 叉树、带 next 指针的二叉树、多级双向链表和四叉树各自提供对应的 LOCAL Node 定义。四叉树按区域值核对，允许非叶节点的 val 使用不同合法值。

Codec 的本地样例通过两个独立实例完成 serialize/deserialize 往返，比较恢复后的树。多解树题检查遍历、BST 顺序和高度等性质；不会要求和某一棵样例树完全相同。解法仍保留 TODO，完成状态由实际学习结果记录。

## 官方示例审计

本地断言以官方题面示例为基础；补充用例标为 `kind: boundary`，审计时单独排除。
有公开题面缓存时运行：

```bash
python3 -m tools.audit_examples --cache-dir /tmp/lingcha-questions
```

审计按顺序核对输入、预期输出及缺失示例；不请求网络。缓存不完整或示例变化会失败。
全部免费题使用 `data/environments/*.json` 的环境配方；旧 Hot100 示例已经并入配方。
审计还检查真实 C++ 文件中的 LOCAL 断言：生成用例逐例核对，Hot100 的手写用例核对已审阅的 LOCAL 源码和对应示例摘要。
检查忽略注释和格式差异，保留字符串内容；算法主体可自由修改。修改已有 LOCAL 断言时需同时核对并更新环境配方；新增边界用例需明确标注。
`make check` 无需题面缓存即可检查配方与实际断言的对应，缓存题面审计另用上面的命令。
这些检查发现遗漏和漂移，不证明断言覆盖所有错误，更不表示算法已经正确。
第 142、160 题的文字输出规范化为节点索引或值，本地断言仍应比较节点身份。
完整正确性通过 LeetCode 提交验证，未实现的骨架运行断言仍可能失败。

## 按章节浏览题单

```bash
make browse PLAN=lingcha-basic
make browse PLAN=lingcha-dp CHAPTER="背包" FREE=1
make list PLAN=hot100 VIEW=order
```

`browse` 按题单章节顺序显示各条归属和筛选范围内的学习进度。重复归属保留，总计同时显示归属条数和不同题目数；学习记录共用。
`VIEW=order` 每题只显示一次，保持第一次出现的顺序。原有默认 `list` 的分数组模式仍可使用。
两种浏览方式均支持阶段、会员权限、状态、搜索和分数筛选；指定分数范围时，默认未标分题不纳入，仍可用 `UNRATED=include`。
按章节浏览须选择一个具体题单，不能使用 `PLAN=all`。

## 重建缺失环境

所有免费题均有环境配方，包括完整 Hot100。`make prepare PLAN=hot100` 只补缺失文件，保留现有代码与学习记录。
重建的是带官方断言的 TODO 骨架，不会恢复此前写过的算法；恢复个人解法应使用 Git 或备份。
若已完成题的代码丢失，环境重建后仍保留原有学习记录，因此需要恢复个人解法后再运行验证。

## CI 与检查范围

`.github/workflows/verify.yml` 在 push 和 PR 时执行 `make verify CXX=g++`，再执行 `python3 -m tools.ci`。
CI 获取完整 Git 历史，以 PR 的目标分支提交或 push 前的提交作为差异基准。
已登记单题 C++ 文件的变更只编译相关环境；公共头文件、工具、模板、Makefile、环境配方或个人用例变更编译全部免费环境。
新增、删除或未登记的 C++ 文件、基准缺失或不可解析时也检查全库。文档或学习记录变更不额外编译 TODO 骨架；基础验证仍照常执行。
TODO 骨架只做语法检查；已记录完成的题目通过 `make verify` 执行本地断言。CI 不修改学习记录，也不自动同步或提交生成文档。

```bash
make ci BASE=HEAD DRY_RUN=1  # 预览相对 HEAD 的已提交差异；不包含工作区改动
make ci                    # 无基准时检查全库
```

工作流设置只读仓库权限、30 分钟超时，并取消同一分支上已被新运行替代的检查。
实际 GitHub 运行结果需推送后查看 Actions；本地验证不代表远端已运行。

## 个人补充用例

```bash
make extra ID=1
```

该命令创建 `data/local_cases/1.cpp`，已有文件保持原样。在 `void runExtraCases()` 内构造符合题目约束的输入、实例化 Solution（设计题实例化对应类），并写断言，例如：

```cpp
#ifdef LOCAL
void runExtraCases() {
    Solution solution;
    vector<int> nums{2, 7};
    auto result = solution.twoSum(nums, 9);
    sort(result.begin(), result.end());
    assert((result == vector<int>{0, 1}));
}
#endif
```

`make run ID=...`、`make debug ID=...`、`make practice ID=...` 先运行原官方断言，再运行个人用例。
补充用例通过 build 目录里的临时编译入口引入，不修改原解法、官方断言或环境配方；删去个人用例文件即停用。
`make skeletons` 会同时检查补充用例的语法，`make verify` 对已记录完成题运行补充用例。按 FILE 直接编译的命令不加载这套入口。
新建的空函数只是入口，不代表已有有效测试；约束及预期结果需自行核对。空骨架的官方断言仍可能失败。

## 日常验证与失败定位

```bash
make practice ID=1
make practice ID=1 DEBUG=1 TIMEOUT=60
```

一次执行本题相关数据与官方断言检查、C++ 编译、本题官方及个人用例运行，最后检查全库数据、生成文档和官方断言一致性。
它不运行整套工具单元测试，不自动补写解法、同步文档或更改学习状态；共享工具修改仍需 `make verify`。
断言漂移提示题号、用例编号（生成用例）、输入摘要、代码文件、环境配方和修复方式。
旧 Hot100 手写断言以整段 LOCAL 源码绑定核对，提示对应代码和配方；运行失败的断言由编译器输出文件及行号。
编译失败先修复所示代码行；官方断言误改应恢复，有意修改应核对并更新配方。个人边界用例用 `make extra` 单独维护。

旧 Hot100 的运行判定测试位于 `tests/test_legacy_assertions.py`，直接使用真实 LOCAL 主函数，以测试用回复验证
142、160、236 的节点身份，以及 108 的合法替代树、5 的合法替代字符串、138 的复制身份。
这些测试实现仅存在于临时目录，不填充仓库未完成解法；运行覆盖仍是有限样例，完整正确性通过 LeetCode 提交验证。

G++ 与 Clang 对构造函数参数遮蔽的警告规则不同；公共节点构造函数使用独立参数名，保持两个编译器下的日志清晰。远端全量检查会报告通过数量与有警告的文件数，工作流绿色并不等于零警告。
