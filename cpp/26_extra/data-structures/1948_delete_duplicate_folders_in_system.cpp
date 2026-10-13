/*
 * Problem: 1948. 删除系统中的重复文件夹 / Delete Duplicate Folders in System
 * Link: https://leetcode.cn/problems/delete-duplicate-folders-in-system/
 * Chapter: 数据结构
 * Difficulty: Hard
 *
 * Idea:
 * - 
 *
 * Complexity:
 * - Time:
 * - Space:
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass:
 * - Last attempt:
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 0
 * - Status: TODO
 */

#include <algorithm>
#include <cassert>
#include <cmath>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "common/leetcode.hpp"
#endif

class Solution {
public:
    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        // TODO: 在这里实现你的解法。
        (void)paths;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<string>> paths = {{"a"}, {"c"}, {"d"}, {"a", "b"}, {"c", "b"}, {"d", "a"}};
        auto localResult = solution.deleteDuplicateFolder(paths);
        vector<vector<string>> expected = {{"d"}, {"d", "a"}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<string>> paths = {{"a"}, {"c"}, {"a", "b"}, {"c", "b"}, {"a", "b", "x"}, {"a", "b", "x", "y"}, {"w"}, {"w", "y"}};
        auto localResult = solution.deleteDuplicateFolder(paths);
        vector<vector<string>> expected = {{"c"}, {"c", "b"}, {"a"}, {"a", "b"}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<string>> paths = {{"a", "b"}, {"c", "d"}, {"c"}, {"a"}};
        auto localResult = solution.deleteDuplicateFolder(paths);
        vector<vector<string>> expected = {{"c"}, {"c", "d"}, {"a"}, {"a", "b"}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<string>> paths = {{"a"}, {"a", "x"}, {"a", "x", "y"}, {"a", "z"}, {"b"}, {"b", "x"}, {"b", "x", "y"}, {"b", "z"}};
        auto localResult = solution.deleteDuplicateFolder(paths);
        vector<vector<string>> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<string>> paths = {{"a"}, {"a", "x"}, {"a", "x", "y"}, {"a", "z"}, {"b"}, {"b", "x"}, {"b", "x", "y"}, {"b", "z"}, {"b", "w"}};
        auto localResult = solution.deleteDuplicateFolder(paths);
        vector<vector<string>> expected = {{"b"}, {"b", "w"}, {"b", "z"}, {"a"}, {"a", "z"}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
