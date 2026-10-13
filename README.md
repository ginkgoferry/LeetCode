# LeetCode Hot 100 · C++

一个面向长期刷题、复习和复盘的 C++ 项目，包含
[LeetCode 热题 100](https://leetcode.cn/studyplan/top-100-liked/) 和灵茶山艾府的专题题单。
免费题已准备 C++ 骨架与本地断言，会员题保留题单索引。

项目内置零依赖记录工具：题目状态、学习次数、信心分、用时、复习日期和简短笔记只记录一次，
题解头部、下方进度表和 [`notes/review.md`](notes/review.md) 会自动同步。

## 多题单

题目代码和学习记录按题号共用，题单各自保存章节与学习顺序。初始当前题单为 Hot 100，可用 `make use` 切换；下方进度始终展示 Hot 100。

<!-- AUTO_PLANS:START -->
| 题单 | 去重题数 | 已标分 | 已准备环境 |
|---|---:|---:|---:|---:|
| [LeetCode Hot 100](notes/plans/hot100.md) | 100 | 1 | 100 |
| [灵茶山艾府 · 基础算法精讲](notes/plans/lingcha-basic.md) | 172 | 65 | 172 |
| [灵茶山艾府 · 二分算法](notes/plans/lingcha-binary-search.md) | 138 | 73 | 112 |
| [灵茶山艾府 · 位运算](notes/plans/lingcha-bitwise.md) | 129 | 82 | 119 |
| [灵茶山艾府 · 常用数据结构](notes/plans/lingcha-data-structures.md) | 610 | 372 | 529 |
| [灵茶山艾府 · 动态规划](notes/plans/lingcha-dp.md) | 633 | 427 | 572 |
| [灵茶山艾府 · 图论算法](notes/plans/lingcha-graph.md) | 180 | 119 | 150 |
| [灵茶山艾府 · 贪心与思维](notes/plans/lingcha-greedy.md) | 523 | 382 | 461 |
| [灵茶山艾府 · 网格图](notes/plans/lingcha-grid.md) | 75 | 38 | 59 |
| [灵茶山艾府 · 数学算法](notes/plans/lingcha-math.md) | 334 | 217 | 303 |
| [灵茶山艾府 · 单调栈](notes/plans/lingcha-monotonic-stack.md) | 62 | 35 | 51 |
| [灵茶山艾府 · 滑动窗口与双指针](notes/plans/lingcha-sliding-window.md) | 277 | 150 | 241 |
| [灵茶山艾府 · 字符串](notes/plans/lingcha-string.md) | 82 | 45 | 69 |
| [灵茶山艾府 · 链表、树与回溯](notes/plans/lingcha-tree-backtracking.md) | 424 | 159 | 335 |

题单之间有重复题，上表数量不能直接相加。全库去重后收录 2,831 道题，已准备 2,425 个本地环境；406 道已确认会员题保留索引。
当前收录的免费题均已准备本地环境，元数据与环境待办已清零。
<!-- AUTO_PLANS:END -->

```bash
make plans                            # 查看题单、当前选择和分数覆盖情况
make use PLAN=lingcha-sliding-window   # 保存当前学习题单
make next TRAIN=basic FREE=1 MAX_RATING=1700
make practice ID=1                   # 本题运行与一致性检查
make extra ID=1                      # 创建独立个人补充用例
make browse PLAN=lingcha-basic        # 按章节浏览并查看章节进度
make list PLAN=hot100 VIEW=order       # 按原始顺序浏览，不按分数组
make list UNRATED=only FREE=1          # 单独查看未标分题
make next TRAIN=advanced MIN_RATING=1700 MAX_RATING=2000
make stats
make today
make reviews PLAN=lingcha-sliding-window
make stats PLAN=hot100                # 单次查询覆盖当前选择
make run ID="LCP 68"
make skeletons PLAN=lingcha-sliding-window
make pending PLAN=all LIMIT=20        # 查看待核对、待准备题目
```

难度分已接入各题单，上表列出覆盖情况。同题可复用其他题单明确标出的分数，列表和题单文档显示来源；原始题单数据保留原有标注。来源冲突时优先使用当前题单明确分数，否则保持未标分。
列表默认将已标分和未标分题分别展示；指定分数范围时，未标分题不会被默认推荐。
`TRAIN=basic` 表示常规主线，`TRAIN=advanced` 表示原题单明确标出的进阶、选做、扩展或相似题目，
与 LeetCode 的 Easy/Medium/Hard 独立。更详细的缺分处理见 [工作流](docs/WORKFLOW.md)。

同一道题在不同小节重复出现时，保留全部分类，进度与复习只计一次；筛选小节后使用该小节的原始顺序。
与 Hot 100 重合的题目复用原文件和记录。已准备的新增免费题包含核对过的 C++ 函数签名与官方样例断言，
适用题目另有边界用例；算法保留 TODO。会员题显示 `🔒`；会员题、元数据待核对题和未准备环境的题不进入下一题推荐。

运行未填写解法的骨架时，样例断言失败是正常的。`make skeletons` 仅检查环境编译，
`make verify` 执行工具测试、结构检查和已完成题目的本地测试，都不会自动修改学习状态。
核对过的接口与样例保存在 `data/environments/`，`make prepare PLAN=lingcha-sliding-window` 可补建缺失环境，已有文件保持原样。

## 最顺手的日常流程

```bash
# 1. 看今天该复习什么、接下来做什么
make today

# 2. 开始第 283 题
make start ID=283

# 3. 在本地编译并运行文件内的断言
make run ID=283

# 4. 完成后记录状态、信心分、用时和一句复盘
make done ID=283 CONFIDENCE=4 MINUTES=25 NOTE="双指针覆盖后补零"

# 5. 复习后自动安排下一次复习
make reviewed ID=283 CONFIDENCE=5 MINUTES=8 NOTE="一次写对"
```

只想快速记一句话时：

```bash
make note ID=283 NOTE="不要在移动非零元素时忘记保持相对顺序"
```

运行 `make help` 可以随时查看所有入口。更完整的过滤、搜索、补录日期和复习规则见
[`docs/WORKFLOW.md`](docs/WORKFLOW.md)。

## 状态约定

| 状态 | 含义 | 建议使用时机 |
|---|---|---|
| `TODO` | 未开始 | 尚未正式尝试 |
| `DOING` | 进行中 | 已开始但还没完成 |
| `HINT` | 借助提示完成 | 看了提示后独立写完 |
| `DONE` | 独立完成 | 没看关键提示，完整通过 |
| `REVIEW` | 需要复习 | 思路不牢、实现卡顿或本次失败 |
| `STAR` | 重点题 | 典型、易错，值得长期反复写 |

信心分使用 `1` 到 `5`。完成或复习后，工具会按 `1 / 3 / 7 / 14 / 30` 天安排下一次复习；
你仍然可以通过下一次记录自由调整状态。

## 本地运行

需要 Python 3.10+ 和支持 C++20 的 `clang++` 或 `g++`，不需要安装第三方包。

```bash
make run ID=1                                 # 普通编译
make debug ID=1                               # Address/UB Sanitizer
make run FILE=cpp/01_hash/001_two_sum.cpp     # 也支持按文件运行
make test                                     # 工具单测 + 全部已完成题
make check                                    # 检查目录、数据、题解头部和文档
make verify                                   # check + 编译测试
```

提交到 LeetCode 时复制题目要求的 `Solution`、设计类或 `Codec`。本地测试所需的链表、树和随机链表辅助结构位于
[`common/leetcode.hpp`](common/leetcode.hpp)，只会在定义了 `LOCAL` 时引入。

## 项目结构

```text
cpp/                 100 道题的实现、题目元数据和本地断言
common/              本地测试用的数据结构与辅助函数
data/problems.json   题目目录（稳定元数据）
data/plans/          各题单的来源、收录范围、章节与有序题号
data/environments/   核对过的接口和本地测试用例（用于准备环境）
data/workspace.json  当前学习题单设置（不影响学习记录）
data/progress.json   个人进度与完整学习历史（记录源）
notes/               专题笔记与自动生成的复习队列
templates/           新题解和专题笔记模板
tools/leetcode.py    记录、检索、同步、检查与测试工具
```

`data/` 是进度的唯一数据源。手工修改题解头部或自动生成表格后，`make check` 会提示不同步；
正常情况下请使用记录命令，然后让工具统一更新。

## 当前进度

<!-- AUTO_PROGRESS:START -->
**总进度：3 / 100（3.0%）**

`█░░░░░░░░░░░░░░░░░░░`

⬜ TODO 97 · 🟦 DOING 0 · 🟨 HINT 0 · ✅ DONE 3 · 🔁 REVIEW 0 · ⭐ STAR 0

截至 2026-10-13，有 **3** 道题到期复习。

### 分专题进度

| 专题 | 已完成 | 总数 | 进度 |
|---|---:|---:|---:|
| 哈希 | 3 | 3 | 100% |
| 双指针 | 0 | 4 | 0% |
| 滑动窗口 | 0 | 2 | 0% |
| 子串 | 0 | 3 | 0% |
| 普通数组 | 0 | 5 | 0% |
| 矩阵 | 0 | 4 | 0% |
| 链表 | 0 | 14 | 0% |
| 二叉树 | 0 | 15 | 0% |
| 图论 | 0 | 4 | 0% |
| 回溯 | 0 | 8 | 0% |
| 二分查找 | 0 | 6 | 0% |
| 栈 | 0 | 5 | 0% |
| 堆 | 0 | 3 | 0% |
| 贪心算法 | 0 | 4 | 0% |
| 动态规划 | 0 | 10 | 0% |
| 多维动态规划 | 0 | 5 | 0% |
| 技巧 | 0 | 5 | 0% |

### 完整题单

| # | 题目 | 专题 | 难度 | 状态 | 最近学习 | 下次复习 | 代码 | 难度分 | 训练阶段 | 原题单备注 |
|---:|---|---|---|---|---|---|---|---:|---|---|
| 1 | [两数之和](https://leetcode.cn/problems/two-sum/) | 哈希 | EASY | ✅ DONE | 2026-07-05 | - | [C++](cpp/01_hash/001_two_sum.cpp) | 未标分 | 常规主线 | - |
| 49 | [字母异位词分组](https://leetcode.cn/problems/group-anagrams/) | 哈希 | MEDIUM | ✅ DONE | 2026-07-05 | - | [C++](cpp/01_hash/049_group_anagrams.cpp) | 未标分 | 常规主线 | - |
| 128 | [最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/) | 哈希 | MEDIUM | ✅ DONE | 2026-07-05 | - | [C++](cpp/01_hash/128_longest_consecutive_sequence.cpp) | 未标分 | 常规主线 | - |
| 283 | [移动零](https://leetcode.cn/problems/move-zeroes/) | 双指针 | EASY | ⬜ TODO | - | - | [C++](cpp/02_two_pointers/283_move_zeroes.cpp) | 未标分 | 常规主线 | - |
| 11 | [盛最多水的容器](https://leetcode.cn/problems/container-with-most-water/) | 双指针 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/02_two_pointers/011_container_with_most_water.cpp) | 未标分 | 常规主线 | - |
| 15 | [三数之和](https://leetcode.cn/problems/3sum/) | 双指针 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/02_two_pointers/015_3sum.cpp) | 未标分 | 常规主线 | - |
| 42 | [接雨水](https://leetcode.cn/problems/trapping-rain-water/) | 双指针 | HARD | ⬜ TODO | - | - | [C++](cpp/02_two_pointers/042_trapping_rain_water.cpp) | 未标分 | 常规主线 | - |
| 3 | [无重复字符的最长子串](https://leetcode.cn/problems/longest-substring-without-repeating-characters/) | 滑动窗口 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/03_sliding_window/003_longest_substring_without_repeating_characters.cpp) | 未标分 | 常规主线 | - |
| 438 | [找到字符串中所有字母异位词](https://leetcode.cn/problems/find-all-anagrams-in-a-string/) | 滑动窗口 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/03_sliding_window/438_find_all_anagrams_in_a_string.cpp) | 未标分 | 常规主线 | - |
| 560 | [和为 K 的子数组](https://leetcode.cn/problems/subarray-sum-equals-k/) | 子串 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/04_substring/560_subarray_sum_equals_k.cpp) | 未标分 | 常规主线 | - |
| 239 | [滑动窗口最大值](https://leetcode.cn/problems/sliding-window-maximum/) | 子串 | HARD | ⬜ TODO | - | - | [C++](cpp/04_substring/239_sliding_window_maximum.cpp) | 未标分 | 常规主线 | - |
| 76 | [最小覆盖子串](https://leetcode.cn/problems/minimum-window-substring/) | 子串 | HARD | ⬜ TODO | - | - | [C++](cpp/04_substring/076_minimum_window_substring.cpp) | 未标分 | 常规主线 | - |
| 53 | [最大子数组和](https://leetcode.cn/problems/maximum-subarray/) | 普通数组 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/05_array/053_maximum_subarray.cpp) | 未标分 | 常规主线 | - |
| 56 | [合并区间](https://leetcode.cn/problems/merge-intervals/) | 普通数组 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/05_array/056_merge_intervals.cpp) | 未标分 | 常规主线 | - |
| 189 | [轮转数组](https://leetcode.cn/problems/rotate-array/) | 普通数组 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/05_array/189_rotate_array.cpp) | 未标分 | 常规主线 | - |
| 238 | [除自身以外数组的乘积](https://leetcode.cn/problems/product-of-array-except-self/) | 普通数组 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/05_array/238_product_of_array_except_self.cpp) | 未标分 | 常规主线 | - |
| 41 | [缺失的第一个正数](https://leetcode.cn/problems/first-missing-positive/) | 普通数组 | HARD | ⬜ TODO | - | - | [C++](cpp/05_array/041_first_missing_positive.cpp) | 未标分 | 常规主线 | - |
| 73 | [矩阵置零](https://leetcode.cn/problems/set-matrix-zeroes/) | 矩阵 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/06_matrix/073_set_matrix_zeroes.cpp) | 未标分 | 常规主线 | - |
| 54 | [螺旋矩阵](https://leetcode.cn/problems/spiral-matrix/) | 矩阵 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/06_matrix/054_spiral_matrix.cpp) | 未标分 | 常规主线 | - |
| 48 | [旋转图像](https://leetcode.cn/problems/rotate-image/) | 矩阵 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/06_matrix/048_rotate_image.cpp) | 未标分 | 常规主线 | - |
| 240 | [搜索二维矩阵 II](https://leetcode.cn/problems/search-a-2d-matrix-ii/) | 矩阵 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/06_matrix/240_search_a_2d_matrix_ii.cpp) | 未标分 | 常规主线 | - |
| 160 | [相交链表](https://leetcode.cn/problems/intersection-of-two-linked-lists/) | 链表 | EASY | ⬜ TODO | - | - | [C++](cpp/07_linked_list/160_intersection_of_two_linked_lists.cpp) | 未标分 | 常规主线 | - |
| 206 | [反转链表](https://leetcode.cn/problems/reverse-linked-list/) | 链表 | EASY | ⬜ TODO | - | - | [C++](cpp/07_linked_list/206_reverse_linked_list.cpp) | 未标分 | 常规主线 | - |
| 234 | [回文链表](https://leetcode.cn/problems/palindrome-linked-list/) | 链表 | EASY | ⬜ TODO | - | - | [C++](cpp/07_linked_list/234_palindrome_linked_list.cpp) | 未标分 | 常规主线 | - |
| 141 | [环形链表](https://leetcode.cn/problems/linked-list-cycle/) | 链表 | EASY | ⬜ TODO | - | - | [C++](cpp/07_linked_list/141_linked_list_cycle.cpp) | 未标分 | 常规主线 | - |
| 142 | [环形链表 II](https://leetcode.cn/problems/linked-list-cycle-ii/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/142_linked_list_cycle_ii.cpp) | 未标分 | 常规主线 | - |
| 21 | [合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/) | 链表 | EASY | ⬜ TODO | - | - | [C++](cpp/07_linked_list/021_merge_two_sorted_lists.cpp) | 未标分 | 常规主线 | - |
| 2 | [两数相加](https://leetcode.cn/problems/add-two-numbers/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/002_add_two_numbers.cpp) | 未标分 | 常规主线 | - |
| 19 | [删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/019_remove_nth_node_from_end_of_list.cpp) | 未标分 | 常规主线 | - |
| 24 | [两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/024_swap_nodes_in_pairs.cpp) | 未标分 | 常规主线 | - |
| 25 | [K 个一组翻转链表](https://leetcode.cn/problems/reverse-nodes-in-k-group/) | 链表 | HARD | ⬜ TODO | - | - | [C++](cpp/07_linked_list/025_reverse_nodes_in_k_group.cpp) | 未标分 | 常规主线 | - |
| 138 | [随机链表的复制](https://leetcode.cn/problems/copy-list-with-random-pointer/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/138_copy_list_with_random_pointer.cpp) | 未标分 | 常规主线 | - |
| 148 | [排序链表](https://leetcode.cn/problems/sort-list/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/148_sort_list.cpp) | 未标分 | 常规主线 | - |
| 23 | [合并 K 个升序链表](https://leetcode.cn/problems/merge-k-sorted-lists/) | 链表 | HARD | ⬜ TODO | - | - | [C++](cpp/07_linked_list/023_merge_k_sorted_lists.cpp) | 未标分 | 常规主线 | - |
| 146 | [LRU 缓存](https://leetcode.cn/problems/lru-cache/) | 链表 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/07_linked_list/146_lru_cache.cpp) | 未标分 | 常规主线 | - |
| 94 | [二叉树的中序遍历](https://leetcode.cn/problems/binary-tree-inorder-traversal/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/094_binary_tree_inorder_traversal.cpp) | 未标分 | 常规主线 | - |
| 104 | [二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/104_maximum_depth_of_binary_tree.cpp) | 未标分 | 常规主线 | - |
| 226 | [翻转二叉树](https://leetcode.cn/problems/invert-binary-tree/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/226_invert_binary_tree.cpp) | 未标分 | 常规主线 | - |
| 101 | [对称二叉树](https://leetcode.cn/problems/symmetric-tree/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/101_symmetric_tree.cpp) | 未标分 | 常规主线 | - |
| 543 | [二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/543_diameter_of_binary_tree.cpp) | 未标分 | 常规主线 | - |
| 102 | [二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/102_binary_tree_level_order_traversal.cpp) | 未标分 | 常规主线 | - |
| 108 | [将有序数组转换为二叉搜索树](https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/) | 二叉树 | EASY | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/108_convert_sorted_array_to_binary_search_tree.cpp) | 未标分 | 常规主线 | - |
| 98 | [验证二叉搜索树](https://leetcode.cn/problems/validate-binary-search-tree/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/098_validate_binary_search_tree.cpp) | 未标分 | 常规主线 | - |
| 230 | [二叉搜索树中第 K 小的元素](https://leetcode.cn/problems/kth-smallest-element-in-a-bst/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/230_kth_smallest_element_in_a_bst.cpp) | 未标分 | 常规主线 | - |
| 199 | [二叉树的右视图](https://leetcode.cn/problems/binary-tree-right-side-view/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/199_binary_tree_right_side_view.cpp) | 未标分 | 常规主线 | - |
| 114 | [二叉树展开为链表](https://leetcode.cn/problems/flatten-binary-tree-to-linked-list/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/114_flatten_binary_tree_to_linked_list.cpp) | 未标分 | 常规主线 | - |
| 105 | [从前序与中序遍历序列构造二叉树](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/105_construct_binary_tree_from_preorder_and_inorder_traversal.cpp) | 未标分 | 常规主线 | - |
| 437 | [路径总和 III](https://leetcode.cn/problems/path-sum-iii/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/437_path_sum_iii.cpp) | 未标分 | 常规主线 | - |
| 236 | [二叉树的最近公共祖先](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/) | 二叉树 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/236_lowest_common_ancestor_of_a_binary_tree.cpp) | 未标分 | 常规主线 | - |
| 124 | [二叉树中的最大路径和](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) | 二叉树 | HARD | ⬜ TODO | - | - | [C++](cpp/08_binary_tree/124_binary_tree_maximum_path_sum.cpp) | 未标分 | 常规主线 | - |
| 200 | [岛屿数量](https://leetcode.cn/problems/number-of-islands/) | 图论 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/09_graph/200_number_of_islands.cpp) | 未标分 | 常规主线 | - |
| 994 | [腐烂的橘子](https://leetcode.cn/problems/rotting-oranges/) | 图论 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/09_graph/994_rotting_oranges.cpp) | 未标分 | 常规主线 | - |
| 207 | [课程表](https://leetcode.cn/problems/course-schedule/) | 图论 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/09_graph/207_course_schedule.cpp) | 未标分 | 常规主线 | - |
| 208 | [实现 Trie (前缀树)](https://leetcode.cn/problems/implement-trie-prefix-tree/) | 图论 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/09_graph/208_implement_trie_prefix_tree.cpp) | 未标分 | 常规主线 | - |
| 46 | [全排列](https://leetcode.cn/problems/permutations/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/046_permutations.cpp) | 未标分 | 常规主线 | - |
| 78 | [子集](https://leetcode.cn/problems/subsets/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/078_subsets.cpp) | 未标分 | 常规主线 | - |
| 17 | [电话号码的字母组合](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/017_letter_combinations_of_a_phone_number.cpp) | 未标分 | 常规主线 | - |
| 39 | [组合总和](https://leetcode.cn/problems/combination-sum/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/039_combination_sum.cpp) | 未标分 | 常规主线 | - |
| 22 | [括号生成](https://leetcode.cn/problems/generate-parentheses/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/022_generate_parentheses.cpp) | 未标分 | 常规主线 | - |
| 79 | [单词搜索](https://leetcode.cn/problems/word-search/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/079_word_search.cpp) | 未标分 | 常规主线 | - |
| 131 | [分割回文串](https://leetcode.cn/problems/palindrome-partitioning/) | 回溯 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/10_backtracking/131_palindrome_partitioning.cpp) | 未标分 | 常规主线 | - |
| 51 | [N 皇后](https://leetcode.cn/problems/n-queens/) | 回溯 | HARD | ⬜ TODO | - | - | [C++](cpp/10_backtracking/051_n_queens.cpp) | 未标分 | 常规主线 | - |
| 35 | [搜索插入位置](https://leetcode.cn/problems/search-insert-position/) | 二分查找 | EASY | ⬜ TODO | - | - | [C++](cpp/11_binary_search/035_search_insert_position.cpp) | 未标分 | 常规主线 | - |
| 74 | [搜索二维矩阵](https://leetcode.cn/problems/search-a-2d-matrix/) | 二分查找 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/11_binary_search/074_search_a_2d_matrix.cpp) | 未标分 | 常规主线 | - |
| 34 | [在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/) | 二分查找 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/11_binary_search/034_find_first_and_last_position_of_element_in_sorted_array.cpp) | 未标分 | 常规主线 | - |
| 33 | [搜索旋转排序数组](https://leetcode.cn/problems/search-in-rotated-sorted-array/) | 二分查找 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/11_binary_search/033_search_in_rotated_sorted_array.cpp) | 未标分 | 常规主线 | - |
| 153 | [寻找旋转排序数组中的最小值](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/) | 二分查找 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/11_binary_search/153_find_minimum_in_rotated_sorted_array.cpp) | 未标分 | 常规主线 | - |
| 4 | [寻找两个正序数组的中位数](https://leetcode.cn/problems/median-of-two-sorted-arrays/) | 二分查找 | HARD | ⬜ TODO | - | - | [C++](cpp/11_binary_search/004_median_of_two_sorted_arrays.cpp) | 未标分 | 常规主线 | - |
| 20 | [有效的括号](https://leetcode.cn/problems/valid-parentheses/) | 栈 | EASY | ⬜ TODO | - | - | [C++](cpp/12_stack/020_valid_parentheses.cpp) | 未标分 | 常规主线 | - |
| 155 | [最小栈](https://leetcode.cn/problems/min-stack/) | 栈 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/12_stack/155_min_stack.cpp) | 未标分 | 常规主线 | - |
| 394 | [字符串解码](https://leetcode.cn/problems/decode-string/) | 栈 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/12_stack/394_decode_string.cpp) | 未标分 | 常规主线 | - |
| 739 | [每日温度](https://leetcode.cn/problems/daily-temperatures/) | 栈 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/12_stack/739_daily_temperatures.cpp) | 未标分 | 常规主线 | - |
| 84 | [柱状图中最大的矩形](https://leetcode.cn/problems/largest-rectangle-in-histogram/) | 栈 | HARD | ⬜ TODO | - | - | [C++](cpp/12_stack/084_largest_rectangle_in_histogram.cpp) | 未标分 | 常规主线 | - |
| 215 | [数组中的第K个最大元素](https://leetcode.cn/problems/kth-largest-element-in-an-array/) | 堆 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/13_heap/215_kth_largest_element_in_an_array.cpp) | 未标分 | 常规主线 | - |
| 347 | [前 K 个高频元素](https://leetcode.cn/problems/top-k-frequent-elements/) | 堆 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/13_heap/347_top_k_frequent_elements.cpp) | 未标分 | 常规主线 | - |
| 295 | [数据流的中位数](https://leetcode.cn/problems/find-median-from-data-stream/) | 堆 | HARD | ⬜ TODO | - | - | [C++](cpp/13_heap/295_find_median_from_data_stream.cpp) | 未标分 | 常规主线 | - |
| 121 | [买卖股票的最佳时机](https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/) | 贪心算法 | EASY | ⬜ TODO | - | - | [C++](cpp/14_greedy/121_best_time_to_buy_and_sell_stock.cpp) | 未标分 | 常规主线 | - |
| 55 | [跳跃游戏](https://leetcode.cn/problems/jump-game/) | 贪心算法 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/14_greedy/055_jump_game.cpp) | 未标分 | 常规主线 | - |
| 45 | [跳跃游戏 II](https://leetcode.cn/problems/jump-game-ii/) | 贪心算法 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/14_greedy/045_jump_game_ii.cpp) | 未标分 | 常规主线 | - |
| 763 | [划分字母区间](https://leetcode.cn/problems/partition-labels/) | 贪心算法 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/14_greedy/763_partition_labels.cpp) | 1443（来源：灵茶山艾府 · 贪心与思维） | 常规主线 | - |
| 70 | [爬楼梯](https://leetcode.cn/problems/climbing-stairs/) | 动态规划 | EASY | ⬜ TODO | - | - | [C++](cpp/15_dp/070_climbing_stairs.cpp) | 未标分 | 常规主线 | - |
| 118 | [杨辉三角](https://leetcode.cn/problems/pascals-triangle/) | 动态规划 | EASY | ⬜ TODO | - | - | [C++](cpp/15_dp/118_pascals_triangle.cpp) | 未标分 | 常规主线 | - |
| 198 | [打家劫舍](https://leetcode.cn/problems/house-robber/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/198_house_robber.cpp) | 未标分 | 常规主线 | - |
| 279 | [完全平方数](https://leetcode.cn/problems/perfect-squares/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/279_perfect_squares.cpp) | 未标分 | 常规主线 | - |
| 322 | [零钱兑换](https://leetcode.cn/problems/coin-change/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/322_coin_change.cpp) | 未标分 | 常规主线 | - |
| 139 | [单词拆分](https://leetcode.cn/problems/word-break/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/139_word_break.cpp) | 未标分 | 常规主线 | - |
| 300 | [最长递增子序列](https://leetcode.cn/problems/longest-increasing-subsequence/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/300_longest_increasing_subsequence.cpp) | 未标分 | 常规主线 | - |
| 152 | [乘积最大子数组](https://leetcode.cn/problems/maximum-product-subarray/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/152_maximum_product_subarray.cpp) | 未标分 | 常规主线 | - |
| 416 | [分割等和子集](https://leetcode.cn/problems/partition-equal-subset-sum/) | 动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/15_dp/416_partition_equal_subset_sum.cpp) | 未标分 | 常规主线 | - |
| 32 | [最长有效括号](https://leetcode.cn/problems/longest-valid-parentheses/) | 动态规划 | HARD | ⬜ TODO | - | - | [C++](cpp/15_dp/032_longest_valid_parentheses.cpp) | 未标分 | 常规主线 | - |
| 62 | [不同路径](https://leetcode.cn/problems/unique-paths/) | 多维动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/16_multidimensional_dp/062_unique_paths.cpp) | 未标分 | 常规主线 | - |
| 64 | [最小路径和](https://leetcode.cn/problems/minimum-path-sum/) | 多维动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/16_multidimensional_dp/064_minimum_path_sum.cpp) | 未标分 | 常规主线 | - |
| 5 | [最长回文子串](https://leetcode.cn/problems/longest-palindromic-substring/) | 多维动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/16_multidimensional_dp/005_longest_palindromic_substring.cpp) | 未标分 | 常规主线 | - |
| 1143 | [最长公共子序列](https://leetcode.cn/problems/longest-common-subsequence/) | 多维动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/16_multidimensional_dp/1143_longest_common_subsequence.cpp) | 未标分 | 常规主线 | - |
| 72 | [编辑距离](https://leetcode.cn/problems/edit-distance/) | 多维动态规划 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/16_multidimensional_dp/072_edit_distance.cpp) | 未标分 | 常规主线 | - |
| 136 | [只出现一次的数字](https://leetcode.cn/problems/single-number/) | 技巧 | EASY | ⬜ TODO | - | - | [C++](cpp/17_tricks/136_single_number.cpp) | 未标分 | 常规主线 | - |
| 169 | [多数元素](https://leetcode.cn/problems/majority-element/) | 技巧 | EASY | ⬜ TODO | - | - | [C++](cpp/17_tricks/169_majority_element.cpp) | 未标分 | 常规主线 | - |
| 75 | [颜色分类](https://leetcode.cn/problems/sort-colors/) | 技巧 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/17_tricks/075_sort_colors.cpp) | 未标分 | 常规主线 | - |
| 31 | [下一个排列](https://leetcode.cn/problems/next-permutation/) | 技巧 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/17_tricks/031_next_permutation.cpp) | 未标分 | 常规主线 | - |
| 287 | [寻找重复数](https://leetcode.cn/problems/find-the-duplicate-number/) | 技巧 | MEDIUM | ⬜ TODO | - | - | [C++](cpp/17_tricks/287_find_the_duplicate_number.cpp) | 未标分 | 常规主线 | - |
<!-- AUTO_PROGRESS:END -->

## 维护原则

- 每次完成题目时补齐题解顶部的 `Idea`、`Complexity` 和 `Pitfalls`。
- 用 `NOTE` 记录“下次最需要想起来的一句话”，长篇总结放进 `notes/`。
- 提交前运行 `make verify`；如果只改了记录或文档，至少运行 `make check`。
- 增删题目或调整目录后，同步维护 `data/problems.json`，再运行 `make sync`。

详细维护约定见 [`AGENTS.md`](AGENTS.md)。

CI 在 push 和 PR 时运行工具测试与一致性检查，并按 Git 差异选择环境编译范围：单题改动检查相关题，公共接口或配方改动检查全部环境。详见 [工作流说明](docs/WORKFLOW.md)。
