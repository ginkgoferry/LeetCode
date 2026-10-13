/*
 * Problem: 1233. 删除子文件夹 / Remove Sub-Folders from the Filesystem
 * Link: https://leetcode.cn/problems/remove-sub-folders-from-the-filesystem/
 * Chapter: 数据结构
 * Difficulty: Medium
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
    vector<string> removeSubfolders(vector<string>& folder) {
        // TODO: 在这里实现你的解法。
        (void)folder;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> folder = {"/a", "/a/b", "/c/d", "/c/d/e", "/c/f"};
        auto localResult = solution.removeSubfolders(folder);
        vector<string> expected = {"/a", "/c/d", "/c/f"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> folder = {"/a", "/a/b/c", "/a/b/d"};
        auto localResult = solution.removeSubfolders(folder);
        vector<string> expected = {"/a"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> folder = {"/a/b/c", "/a/b/ca", "/a/b/d"};
        auto localResult = solution.removeSubfolders(folder);
        vector<string> expected = {"/a/b/c", "/a/b/ca", "/a/b/d"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
