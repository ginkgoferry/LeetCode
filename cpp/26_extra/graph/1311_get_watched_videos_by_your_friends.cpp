/*
 * Problem: 1311. 获取你好友已观看的视频 / Get Watched Videos by Your Friends
 * Link: https://leetcode.cn/problems/get-watched-videos-by-your-friends/
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
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        // TODO: 在这里实现你的解法。
        (void)watchedVideos;
        (void)friends;
        (void)id;
        (void)level;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<string>> watchedVideos = {{"A", "B"}, {"C"}, {"B", "C"}, {"D"}};
        vector<vector<int>> friends = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};
        int id = 0;
        int level = 1;
        auto localResult = solution.watchedVideosByFriends(watchedVideos, friends, id, level);
        vector<string> expected = {"B", "C"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<string>> watchedVideos = {{"A", "B"}, {"C"}, {"B", "C"}, {"D"}};
        vector<vector<int>> friends = {{1, 2}, {0, 3}, {0, 3}, {1, 2}};
        int id = 0;
        int level = 2;
        auto localResult = solution.watchedVideosByFriends(watchedVideos, friends, id, level);
        vector<string> expected = {"D"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
