/*
 * Problem: 49. 字母异位词分组 / Group Anagrams
 * Link: https://leetcode.cn/problems/group-anagrams/
 * Chapter: 哈希
 * Difficulty: Medium
 *
 * Idea:
 * - 将每个字符串排序后作为哈希 key。
 * - 排序结果相同的字符串属于同一组，最后收集哈希表中的所有分组。
 *
 * Complexity:
 * - Time: O(n * k log k), where k is the maximum string length.
 * - Space: O(n * k)
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass: 2026-07-05
 * - Last attempt: 2026-07-05
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 1
 * - Status: DONE
 */

#include <algorithm>
#include <cassert>
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string &s : strs) {
            string sorted_s = s;
            ranges::sort(sorted_s);
            m[sorted_s].push_back(s);
        }
        vector<vector<string>> ans;
        ans.reserve(m.size());
        for (auto& [_, value] : m) ans.push_back(value);
        return ans;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}})));
    }

    {
        vector<string> strs = {""};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{""}})));
    }

    {
        vector<string> strs = {"a"};
        assert((sortedInnerAndOuter(solution.groupAnagrams(strs)) == sortedInnerAndOuter(vector<vector<string>>{{"a"}})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
