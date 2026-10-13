/*
 * Problem: 433. 最小基因变化 / Minimum Genetic Mutation
 * Link: https://leetcode.cn/problems/minimum-genetic-mutation/
 * Chapter: 图论
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
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        // TODO: 在这里实现你的解法。
        (void)startGene;
        (void)endGene;
        (void)bank;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string startGene = "AACCGGTT";
        string endGene = "AACCGGTA";
        vector<string> bank = {"AACCGGTA"};
        auto localResult = solution.minMutation(startGene, endGene, bank);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string startGene = "AACCGGTT";
        string endGene = "AAACGGTA";
        vector<string> bank = {"AACCGGTA", "AACCGCTA", "AAACGGTA"};
        auto localResult = solution.minMutation(startGene, endGene, bank);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string startGene = "AAAAACCC";
        string endGene = "AACCCCCC";
        vector<string> bank = {"AAAACCCC", "AAACCCCC", "AACCCCCC"};
        auto localResult = solution.minMutation(startGene, endGene, bank);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
