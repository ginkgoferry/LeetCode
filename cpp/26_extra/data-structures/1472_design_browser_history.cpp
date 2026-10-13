/*
 * Problem: 1472. 设计浏览器历史记录 / Design Browser History
 * Link: https://leetcode.cn/problems/design-browser-history/
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

class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        // TODO: 在这里实现你的解法。
        (void)homepage;
    }
    
    void visit(string url) {
        // TODO: 在这里实现你的解法。
        (void)url;
    }
    
    string back(int steps) {
        // TODO: 在这里实现你的解法。
        (void)steps;
        return {};
    }
    
    string forward(int steps) {
        // TODO: 在这里实现你的解法。
        (void)steps;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        string homepage = "leetcode.com";
        BrowserHistory localObject(homepage);
        {
            string url = "google.com";
            localObject.visit(url);
        }
        {
            string url = "facebook.com";
            localObject.visit(url);
        }
        {
            string url = "youtube.com";
            localObject.visit(url);
        }
        {
            int steps = 1;
            auto localResult = localObject.back(steps);
            string expected = "facebook.com";
            assert((localResult == expected));
        }
        {
            int steps = 1;
            auto localResult = localObject.back(steps);
            string expected = "google.com";
            assert((localResult == expected));
        }
        {
            int steps = 1;
            auto localResult = localObject.forward(steps);
            string expected = "facebook.com";
            assert((localResult == expected));
        }
        {
            string url = "linkedin.com";
            localObject.visit(url);
        }
        {
            int steps = 2;
            auto localResult = localObject.forward(steps);
            string expected = "linkedin.com";
            assert((localResult == expected));
        }
        {
            int steps = 2;
            auto localResult = localObject.back(steps);
            string expected = "google.com";
            assert((localResult == expected));
        }
        {
            int steps = 7;
            auto localResult = localObject.back(steps);
            string expected = "leetcode.com";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
