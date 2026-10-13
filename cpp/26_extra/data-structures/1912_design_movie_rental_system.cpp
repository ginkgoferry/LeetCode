/*
 * Problem: 1912. 设计电影租借系统 / Design Movie Rental System
 * Link: https://leetcode.cn/problems/design-movie-rental-system/
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

class MovieRentingSystem {
public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)entries;
    }
    
    vector<int> search(int movie) {
        // TODO: 在这里实现你的解法。
        (void)movie;
        return {};
    }
    
    void rent(int shop, int movie) {
        // TODO: 在这里实现你的解法。
        (void)shop;
        (void)movie;
    }
    
    void drop(int shop, int movie) {
        // TODO: 在这里实现你的解法。
        (void)shop;
        (void)movie;
    }
    
    vector<vector<int>> report() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 3;
        vector<vector<int>> entries = {{0, 1, 5}, {0, 2, 6}, {0, 3, 7}, {1, 1, 4}, {1, 2, 7}, {2, 1, 5}};
        MovieRentingSystem localObject(n, entries);
        {
            int movie = 1;
            auto localResult = localObject.search(movie);
            vector<int> expected = {1, 0, 2};
            assert((localResult == expected));
        }
        {
            int shop = 0;
            int movie = 1;
            localObject.rent(shop, movie);
        }
        {
            int shop = 1;
            int movie = 2;
            localObject.rent(shop, movie);
        }
        {
            auto localResult = localObject.report();
            vector<vector<int>> expected = {{0, 1}, {1, 2}};
            assert((localResult == expected));
        }
        {
            int shop = 1;
            int movie = 2;
            localObject.drop(shop, movie);
        }
        {
            int movie = 2;
            auto localResult = localObject.search(movie);
            vector<int> expected = {0, 1};
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
