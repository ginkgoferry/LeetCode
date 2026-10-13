/*
 * Problem: 911. 在线选举 / Online Election
 * Link: https://leetcode.cn/problems/online-election/
 * Chapter: 二分查找
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

class TopVotedCandidate {
public:
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        // TODO: 在这里实现你的解法。
        (void)persons;
        (void)times;
    }
    
    int q(int t) {
        // TODO: 在这里实现你的解法。
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<int> persons = {0, 1, 1, 0, 0, 1, 0};
        vector<int> times = {0, 5, 10, 15, 20, 25, 30};
        TopVotedCandidate localObject(persons, times);
        {
            int t = 3;
            auto localResult = localObject.q(t);
            int expected = 0;
            assert((localResult == expected));
        }
        {
            int t = 12;
            auto localResult = localObject.q(t);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int t = 25;
            auto localResult = localObject.q(t);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int t = 15;
            auto localResult = localObject.q(t);
            int expected = 0;
            assert((localResult == expected));
        }
        {
            int t = 24;
            auto localResult = localObject.q(t);
            int expected = 0;
            assert((localResult == expected));
        }
        {
            int t = 8;
            auto localResult = localObject.q(t);
            int expected = 1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
