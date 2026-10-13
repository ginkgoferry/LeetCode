/*
 * Problem: 1441. 用栈操作构建数组 / Build an Array With Stack Operations
 * Link: https://leetcode.cn/problems/build-an-array-with-stack-operations/
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
    vector<string> buildArray(vector<int>& target, int n) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> target = {1, 3};
        int n = 3;
        const auto localOriginalTarget = target;
        auto localResult = solution.buildArray(target, n);
        vector<int> localStack; int nextValue = 1;
        for (const auto& operation : localResult) {
            assert(localStack != localOriginalTarget);
            if (operation == "Push") { assert(nextValue <= n); localStack.push_back(nextValue++); }
            else { assert(operation == "Pop" && !localStack.empty()); localStack.pop_back(); }
        }
        assert(localStack == localOriginalTarget);
    }

    {
        // 官方样例
        vector<int> target = {1, 2, 3};
        int n = 3;
        const auto localOriginalTarget = target;
        auto localResult = solution.buildArray(target, n);
        vector<int> localStack; int nextValue = 1;
        for (const auto& operation : localResult) {
            assert(localStack != localOriginalTarget);
            if (operation == "Push") { assert(nextValue <= n); localStack.push_back(nextValue++); }
            else { assert(operation == "Pop" && !localStack.empty()); localStack.pop_back(); }
        }
        assert(localStack == localOriginalTarget);
    }

    {
        // 官方样例
        vector<int> target = {1, 2};
        int n = 4;
        const auto localOriginalTarget = target;
        auto localResult = solution.buildArray(target, n);
        vector<int> localStack; int nextValue = 1;
        for (const auto& operation : localResult) {
            assert(localStack != localOriginalTarget);
            if (operation == "Push") { assert(nextValue <= n); localStack.push_back(nextValue++); }
            else { assert(operation == "Pop" && !localStack.empty()); localStack.pop_back(); }
        }
        assert(localStack == localOriginalTarget);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
