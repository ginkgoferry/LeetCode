/*
 * Problem: 1268. 搜索推荐系统 / Search Suggestions System
 * Link: https://leetcode.cn/problems/search-suggestions-system/
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
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        // TODO: 在这里实现你的解法。
        (void)products;
        (void)searchWord;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
        string searchWord = "mouse";
        auto localResult = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = {{"mobile", "moneypot", "monitor"}, {"mobile", "moneypot", "monitor"}, {"mouse", "mousepad"}, {"mouse", "mousepad"}, {"mouse", "mousepad"}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> products = {"havana"};
        string searchWord = "havana";
        auto localResult = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = {{"havana"}, {"havana"}, {"havana"}, {"havana"}, {"havana"}, {"havana"}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> products = {"bags", "baggage", "banner", "box", "cloths"};
        string searchWord = "bags";
        auto localResult = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = {{"baggage", "bags", "banner"}, {"baggage", "bags", "banner"}, {"baggage", "bags"}, {"bags"}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> products = {"havana"};
        string searchWord = "tatiana";
        auto localResult = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = {{}, {}, {}, {}, {}, {}, {}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
