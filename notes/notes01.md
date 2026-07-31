# 01 哈希专题笔记

对应题目：

| 题目 | 容器 | 核心作用 |
|---|---|---|
| 001. 两数之和 | `unordered_map<int, int>` | 记录「数字 -> 下标」 |
| 049. 字母异位词分组 | `unordered_map<string, vector<string>>` | 记录「分组 key -> 字符串列表」 |
| 128. 最长连续序列 | `unordered_set<int>` | 判断数字是否存在 |

## 001. 两数之和

核心代码：

```cpp
unordered_map<int, int> idx;

for (int j = 0; j < nums.size(); j++) {
    auto it = idx.find(target - nums[j]);
    if (it != idx.end()) return {it->second, j};
    idx[nums[j]] = j;
}
return {};
```

### 思路

遍历到 `nums[j]` 时，目标是找：

```cpp
target - nums[j]
```

如果这个数之前出现过，就直接返回之前下标和当前下标。

必须先查再插入：

```cpp
auto it = idx.find(target - nums[j]);
if (it != idx.end()) return {it->second, j};
idx[nums[j]] = j;
```

这样可以避免同一个元素被用两次。

### `unordered_map` vs `map`

| 容器 | 底层 | 是否有序 | 查询/插入 | 常用场景 |
|---|---|---|---|---|
| `unordered_map` | 哈希表 | 无序 | 平均 `O(1)` | 只要快速查找 |
| `map` | 红黑树 | key 有序 | `O(log n)` | 需要按 key 有序遍历 |

本题只需要快速查找数字是否出现过，所以用：

```cpp
unordered_map<int, int> idx;
```

含义：

```text
数字 -> 下标
```

例子：

```cpp
idx[2] = 0;
idx[7] = 1;
```

### `find`、`it`、`end`

```cpp
auto it = idx.find(x);
```

- 找到：`it` 指向这个键值对。
- 没找到：`it == idx.end()`。

对于 `unordered_map<int, int>`：

```cpp
it->first   // key
it->second  // value
```

本题中：

```cpp
return {it->second, j};
```

表示返回「之前那个数的下标」和「当前下标」。

### `auto`

`auto` 让编译器自动推导类型。

```cpp
auto it = idx.find(x);
```

等价于：

```cpp
unordered_map<int, int>::iterator it = idx.find(x);
```

注意是否需要引用：

```cpp
auto x = nums[0];   // 拷贝
auto& y = nums[0];  // 引用，可修改原值
```

### `{}` 语法

函数返回 `vector<int>` 时：

```cpp
return {it->second, j};
```

等价于：

```cpp
return vector<int>{it->second, j};
```

返回空结果：

```cpp
return {};
```

等价于：

```cpp
return vector<int>{};
```

## 049. 字母异位词分组

核心代码：

```cpp
unordered_map<string, vector<string>> m;

for (string& s : strs) {
    string sorted_s = s;
    ranges::sort(sorted_s);
    m[sorted_s].push_back(s);
}

vector<vector<string>> ans;
for (auto& [_, value] : m) ans.push_back(value);
return ans;
```

### 思路

异位词排序后相同：

```text
eat -> aet
tea -> aet
ate -> aet
```

所以用排序后的字符串做 key：

```text
aet -> ["eat", "tea", "ate"]
ant -> ["tan", "nat"]
abt -> ["bat"]
```

本题是典型的“分组哈希”。

### `&` 的使用

函数参数：

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs)
```

`&` 表示引用，避免拷贝整个数组。

常见写法：

```cpp
vector<int> nums          // 拷贝
vector<int>& nums         // 引用，可修改原数据
const vector<int>& nums   // 只读引用，不拷贝
```

循环中：

```cpp
for (string& s : strs)
```

`s` 是原字符串的引用，避免每次循环拷贝字符串。若不修改，通常也可以写：

```cpp
for (const string& s : strs)
```

### 为什么要复制 `sorted_s`

```cpp
string sorted_s = s;
ranges::sort(sorted_s);
```

不能直接排序 `s`，否则原字符串会被改掉。答案里要保留原字符串，所以只排序副本。

### `ranges::sort`

C++20 写法：

```cpp
ranges::sort(sorted_s);
```

传统写法：

```cpp
sort(sorted_s.begin(), sorted_s.end());
```

作用一样，都是原地排序。

例子：

```cpp
string s = "tea";
ranges::sort(s); // s == "aet"
```

### `m[sorted_s].push_back(s)`

`m` 的类型是：

```cpp
unordered_map<string, vector<string>>
```

所以：

```cpp
m[sorted_s]
```

是一个 `vector<string>`。

如果 key 不存在，会自动创建一个空 vector，然后执行：

```cpp
push_back(s)
```

把当前字符串加入该组。

### `auto& [_, value]`

```cpp
for (auto& [_, value] : m) ans.push_back(value);
```

这是结构化绑定。`unordered_map` 的元素是键值对：

```cpp
pair<const string, vector<string>>
```

可以拆成：

```cpp
key, value
```

这里写 `_` 表示 key 不关心。

`auto&` 表示引用，避免拷贝整个 `vector<string>`。

更完整写法：

```cpp
for (const auto& [key, value] : m) {
    ans.push_back(value);
}
```

## 128. 最长连续序列

核心代码：

```cpp
unordered_set<int> s(nums.begin(), nums.end());

for (int left : s) {
    if (s.contains(left - 1)) continue;

    int right = left + 1;
    while (s.contains(right)) right++;

    ans = max(ans, right - left);
}
```

### 思路

先把所有数字放入集合，之后可以快速判断某个数字是否存在。

只从连续序列的起点开始数：

```cpp
if (s.contains(left - 1)) continue;
```

如果 `left - 1` 存在，说明 `left` 不是起点，直接跳过。

例如：

```text
1, 2, 3, 4
```

只会从 `1` 开始扩展一次，`2`、`3`、`4` 都会因为有前驱被跳过。

### `unordered_set`

`unordered_set` 只存 key，不存 value。

适合判断存在性：

```cpp
unordered_set<int> s;
s.insert(10);

if (s.contains(10)) {
    // 10 存在
}
```

和 `set` 的区别：

| 容器 | 是否有序 | 查询/插入 | 场景 |
|---|---|---|---|
| `unordered_set` | 无序 | 平均 `O(1)` | 只查存在 |
| `set` | 有序 | `O(log n)` | 需要有序、上下界 |

### 区间初始化

```cpp
unordered_set<int> s(nums.begin(), nums.end());
```

表示把 `nums` 中所有元素放入集合，并自动去重。

例子：

```cpp
vector<int> nums = {1, 2, 2, 3};
unordered_set<int> s(nums.begin(), nums.end());
// s 中是 1, 2, 3
```

### `contains`

C++20 写法：

```cpp
s.contains(x)
```

老写法：

```cpp
s.find(x) != s.end()
```

两者都是判断元素是否存在。

## 三题的区别和联系

### 共同点

都在用哈希结构把“查找”从线性扫描优化成平均 `O(1)`。

### 区别

| 题目 | 查询什么 | 用什么 | 原因 |
|---|---|---|---|
| 两数之和 | 某个补数是否出现过，并拿到下标 | `unordered_map<int, int>` | 需要记录 value |
| 字母异位词分组 | 某个规范化 key 对应哪一组 | `unordered_map<string, vector<string>>` | 需要分组 |
| 最长连续序列 | 某个数字是否存在 | `unordered_set<int>` | 只需要存在性 |

### 通用方法

做哈希题时按这个顺序想：

1. 我要快速查询什么？
2. 这个查询对象能不能设计成 key？
3. 只需要判断存在，还是还要记录额外信息？
4. 是边遍历边查，还是先整体建表？

选择容器：

```cpp
unordered_set<Key> st;        // 只判断存在
unordered_map<Key, Value> mp; // key 还要对应额外信息
```

常见套路：

```cpp
// 1. 查补数、查旧状态
unordered_map<int, int> mp;
for (...) {
    if (mp.find(need) != mp.end()) ...
    mp[cur] = value;
}
```

```cpp
// 2. 分组
unordered_map<Key, vector<Item>> groups;
for (auto& item : items) {
    Key key = build_key(item);
    groups[key].push_back(item);
}
```

```cpp
// 3. 存在性
unordered_set<int> st(nums.begin(), nums.end());
if (st.contains(x)) ...
```

### 易错点

- `unordered_map` / `unordered_set` 不保证遍历顺序。
- `mp[key]` 在 key 不存在时会自动创建默认值。
- 只检查存在时，优先用 `find` / `contains`。
- 大对象循环时尽量用引用：`auto&` 或 `const auto&`。
- 哈希题的关键不是“用哈希表”，而是设计正确的 `key`。
