/*
 * Problem: 781. 森林中的兔子 / Rabbits in Forest
 * Link: https://leetcode.cn/problems/rabbits-in-forest/
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
    int numRabbits(vector<int>& answers) {
        // TODO: 在这里实现你的解法。
        (void)answers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> answers = {1, 1, 2};
        auto localResult = solution.numRabbits(answers);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> answers = {10, 10, 10};
        auto localResult = solution.numRabbits(answers);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
