# 当前功能与代码入口

LeetCode 是支持多题单的 C++20 刷题工作区。当前题单、题目与环境数量以 [README 自动总览](../README.md) 和 `make plans` 为准。
Hot100 和灵茶山艾府题单共享同题的解法、状态与复习历史，各自保留分类和学习顺序。

| 功能 | 使用入口 | 实现与数据 |
|---|---|---|
| 查看与切换题单 | `make plans`、`make use PLAN=...` | [跟踪工具](../tools/leetcode.py)、`data/plans/`、`data/workspace.json` |
| 按章节、顺序或分数组浏览 | `make browse PLAN=...`、`make list VIEW=order`、`make list` | `command_list`；题单 items 保存分类、阶段、分数、备注和课程链接 |
| 筛选与搜索 | `CHAPTER`、`DIFFICULTY`、`TRAIN`、`FREE`、`MIN_RATING`、`MAX_RATING`、`UNRATED`；list 另支持 `QUERY`、`STATUS` | `filter_problems`、`select_plan` |
| 下一题与今日安排 | `make next`、`make today`，next 可用 `RANDOM=1` | `choose_next`；优先继续 DOING，随后按筛选后的题单顺序选择 TODO |
| 学习记录与复习 | `start`、`done`、`hint`、`review`、`star`、`reviewed`、`note`、`reviews` | `data/progress.json`；信心、耗时、日期、笔记、历史与复习安排 |
| 查看题目与统计 | `make show ID=...`、`make stats` | 跟踪工具；章节进度、权限与环境统计，show 展示关联课程链接 |
| 本题编译、运行与调试 | `make run ID=...`、`make debug ID=...`、`make practice ID=...` | `command_run`、`command_practice`、[本地辅助结构](../common/leetcode.hpp) |
| 独立个人用例 | `make extra ID=...` 后编辑 `runExtraCases()` | [个人用例编译入口](../tools/local_cases.py)、`data/local_cases/`；官方用例先运行 |
| 补建缺失环境 | `make prepare PLAN=...` | [环境生成器](../tools/prepare_environments.py)、`data/environments/`；已有解法不覆盖 |
| 骨架语法检查 | `make skeletons PLAN=...` | `command_skeletons`；只编译，包含个人用例，不执行 TODO 断言 |
| 官方示例与实际断言对应 | `make check`；有题面缓存时另运行 `python3 -m tools.audit_examples --cache-dir ...` | [示例审计](../tools/audit_examples.py)；旧 Hot100 使用 LOCAL 源码绑定与示例摘要 |
| 自动生成学习视图 | `make sync` | README、题单文档、复习队列、C++ Review 字段；源数据拥有真实状态 |
| 工具测试与仓库验证 | `make unit`、`make test`、`make verify` | `tests/`；用临时副本模拟学习操作，不修改实际记录 |
| push/PR 自动验证 | GitHub Actions；本地 `make ci BASE=... DRY_RUN=1` 预览已提交差异 | [工作流](../.github/workflows/verify.yml)、[范围选择](../tools/ci.py) |
| 手动导入与环境准备 | 来源扫描、公开元数据缓存、导入、生成配方 | `tools/import_lingcha.py`、`tools/cache_questions.py`、`tools/prepare_cached_questions.py`；步骤见 [工作流](WORKFLOW.md) |

## 默认值与使用边界

| 入口 | 默认范围 |
|---|---|
| `today`、`next`、`list`、`stats` | 当前题单；显式 PLAN 覆盖单次查询 |
| `browse` | 当前题单的章节归属；须选择具体题单，不能 PLAN=all |
| `reviews`、`pending` | 全库；reviews 仅支持 PLAN、DATE，不支持训练分数筛选 |
| `skeletons` | Hot100 |
| `prepare` | lingcha-sliding-window；补建完整 Hot100 请显式 PLAN=hot100 |
| `show`、学习记录、`run`、`debug`、`practice`、`extra` | 按题号查全库，不受当前题单限制 |

难度分仅来自题单明确标注：当前题单明确分数优先，否则复用其他来源的一致分数；来源冲突或没有标注时保持未知。
`PLAN=all` 汇总时，冲突分数在列表和筛选中都按未标分处理；选择具体题单后使用该题单明确标注的分数。
显示分数来源，筛选范围包含上下边界，未知不当作 0。列表默认分组展示；章节和原始顺序浏览保持题单结构。
会员权限依据已核对的官方元数据。会员题保留索引；新题推荐始终选择有代码且已确认免费的 TODO/DOING 题。
训练阶段与 Easy/Medium/Hard 独立；today 的新题条件不会隐藏已有到期复习。

practice 运行本题后检查仓库一致性，不运行整套工具单测，不自动同步文档，也不改变学习状态。
按 ID 运行默认超时 30 秒，可用 TIMEOUT 调整；编译时间不在此上限内。FILE 入口不加载个人用例，也不使用该运行超时。
make test 包含工具单测和已记录完成题的运行测试；底层 `python3 tools/leetcode.py test` 只有后者。
make verify 不编译所有 TODO；完整环境检查另用 skeletons，CI 根据差异自动选择单题或全库。

## 已有验证的范围

特殊节点、借用节点身份、原地修改、有效前缀、多解和随机接口已有本地适配或性质断言。
随机断言验证结果合法性与状态转换，不证明概率分布；性质断言也不能替代完整题目评测。
环境重建恢复 TODO 接口和用例，个人算法需从 Git 或备份恢复，学习记录保留原样。
官方示例或本地测试通过均不会自动记录完成；完整正确性仍以 LeetCode 提交验证。
重设 TODO/DOING 会取消当前复习安排并保留历史；未来复习只显示已记录完成状态。
题单自动更新和按薄弱点安排的个性化推荐尚未实现，当前来源更新通过手动导入完成。

详细参数、记录规则、导入步骤、CI 与故障定位见 [工作流](WORKFLOW.md)。维护者规则见 [AGENTS.md](../AGENTS.md)。
