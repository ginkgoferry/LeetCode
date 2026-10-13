/*
 * Problem: 2102. 序列顺序查询 / Sequentially Ordinal Rank Tracker
 * Link: https://leetcode.cn/problems/sequentially-ordinal-rank-tracker/
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

class SORTracker {
public:
    SORTracker() {
        // TODO: 在这里实现你的解法。
    }
    
    void add(string name, int score) {
        // TODO: 在这里实现你的解法。
        (void)name;
        (void)score;
    }
    
    string get() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        SORTracker localObject;
        {
            string name = "bradford";
            int score = 2;
            localObject.add(name, score);
        }
        {
            string name = "branford";
            int score = 3;
            localObject.add(name, score);
        }
        {
            auto localResult = localObject.get();
            string expected = "branford";
            assert((localResult == expected));
        }
        {
            string name = "alps";
            int score = 2;
            localObject.add(name, score);
        }
        {
            auto localResult = localObject.get();
            string expected = "alps";
            assert((localResult == expected));
        }
        {
            string name = "orland";
            int score = 2;
            localObject.add(name, score);
        }
        {
            auto localResult = localObject.get();
            string expected = "bradford";
            assert((localResult == expected));
        }
        {
            string name = "orlando";
            int score = 3;
            localObject.add(name, score);
        }
        {
            auto localResult = localObject.get();
            string expected = "bradford";
            assert((localResult == expected));
        }
        {
            string name = "alpine";
            int score = 2;
            localObject.add(name, score);
        }
        {
            auto localResult = localObject.get();
            string expected = "bradford";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.get();
            string expected = "orland";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
