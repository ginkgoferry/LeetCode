/*
 * Problem: 2353. 设计食物评分系统 / Design a Food Rating System
 * Link: https://leetcode.cn/problems/design-a-food-rating-system/
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

class FoodRatings {
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        // TODO: 在这里实现你的解法。
        (void)foods;
        (void)cuisines;
        (void)ratings;
    }
    
    void changeRating(string food, int newRating) {
        // TODO: 在这里实现你的解法。
        (void)food;
        (void)newRating;
    }
    
    string highestRated(string cuisine) {
        // TODO: 在这里实现你的解法。
        (void)cuisine;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<string> foods = {"kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"};
        vector<string> cuisines = {"korean", "japanese", "japanese", "greek", "japanese", "korean"};
        vector<int> ratings = {9, 12, 8, 15, 14, 7};
        FoodRatings localObject(foods, cuisines, ratings);
        {
            string cuisine = "korean";
            auto localResult = localObject.highestRated(cuisine);
            string expected = "kimchi";
            assert((localResult == expected));
        }
        {
            string cuisine = "japanese";
            auto localResult = localObject.highestRated(cuisine);
            string expected = "ramen";
            assert((localResult == expected));
        }
        {
            string food = "sushi";
            int newRating = 16;
            localObject.changeRating(food, newRating);
        }
        {
            string cuisine = "japanese";
            auto localResult = localObject.highestRated(cuisine);
            string expected = "sushi";
            assert((localResult == expected));
        }
        {
            string food = "ramen";
            int newRating = 16;
            localObject.changeRating(food, newRating);
        }
        {
            string cuisine = "japanese";
            auto localResult = localObject.highestRated(cuisine);
            string expected = "ramen";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
