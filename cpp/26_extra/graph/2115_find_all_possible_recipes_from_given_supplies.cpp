/*
 * Problem: 2115. 从给定原材料中找到所有可以做出的菜 / Find All Possible Recipes from Given Supplies
 * Link: https://leetcode.cn/problems/find-all-possible-recipes-from-given-supplies/
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
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        // TODO: 在这里实现你的解法。
        (void)recipes;
        (void)ingredients;
        (void)supplies;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> recipes = {"bread"};
        vector<vector<string>> ingredients = {{"yeast", "flour"}};
        vector<string> supplies = {"yeast", "flour", "corn"};
        auto localResult = solution.findAllRecipes(recipes, ingredients, supplies);
        vector<string> expected = {"bread"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> recipes = {"bread", "sandwich"};
        vector<vector<string>> ingredients = {{"yeast", "flour"}, {"bread", "meat"}};
        vector<string> supplies = {"yeast", "flour", "meat"};
        auto localResult = solution.findAllRecipes(recipes, ingredients, supplies);
        vector<string> expected = {"bread", "sandwich"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> recipes = {"bread", "sandwich", "burger"};
        vector<vector<string>> ingredients = {{"yeast", "flour"}, {"bread", "meat"}, {"sandwich", "meat", "bread"}};
        vector<string> supplies = {"yeast", "flour", "meat"};
        auto localResult = solution.findAllRecipes(recipes, ingredients, supplies);
        vector<string> expected = {"bread", "sandwich", "burger"};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> recipes = {"bread"};
        vector<vector<string>> ingredients = {{"yeast", "flour"}};
        vector<string> supplies = {"yeast"};
        auto localResult = solution.findAllRecipes(recipes, ingredients, supplies);
        vector<string> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
