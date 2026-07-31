/*
 * Problem: 763. 划分字母区间 / Partition Labels
 * Link: https://leetcode.cn/problems/partition-labels/
 * Chapter: 贪心算法
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
    vector<int> partitionLabels(string s) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "ababcbacadefegdehijhklij";
        assert((solution.partitionLabels(s) == vector<int>{9, 7, 8}));
    }

    {
        string s = "eccbbbbdec";
        assert((solution.partitionLabels(s) == vector<int>{10}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
