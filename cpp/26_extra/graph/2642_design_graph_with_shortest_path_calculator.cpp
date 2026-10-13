/*
 * Problem: 2642. 设计可以求最短路径的图类 / Design Graph With Shortest Path Calculator
 * Link: https://leetcode.cn/problems/design-graph-with-shortest-path-calculator/
 * Chapter: 图论
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

class Graph {
public:
    Graph(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
    }
    
    void addEdge(vector<int> edge) {
        // TODO: 在这里实现你的解法。
        (void)edge;
    }
    
    int shortestPath(int node1, int node2) {
        // TODO: 在这里实现你的解法。
        (void)node1;
        (void)node2;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 4;
        vector<vector<int>> edges = {{0, 2, 5}, {0, 1, 2}, {1, 2, 1}, {3, 0, 3}};
        Graph localObject(n, edges);
        {
            int node1 = 3;
            int node2 = 2;
            auto localResult = localObject.shortestPath(node1, node2);
            int expected = 6;
            assert((localResult == expected));
        }
        {
            int node1 = 0;
            int node2 = 3;
            auto localResult = localObject.shortestPath(node1, node2);
            int expected = -1;
            assert((localResult == expected));
        }
        {
            vector<int> edge = {1, 3, 4};
            localObject.addEdge(edge);
        }
        {
            int node1 = 0;
            int node2 = 3;
            auto localResult = localObject.shortestPath(node1, node2);
            int expected = 6;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
