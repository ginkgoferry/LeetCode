/*
 * Problem: 382. 链表随机节点 / Linked List Random Node
 * Link: https://leetcode.cn/problems/linked-list-random-node/
 * Chapter: 数学
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

class Solution {
public:
    Solution(ListNode* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
    }
    
    int getRandom() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3});
        collectListNodes(head, localOwnedLists);
        const auto localOriginalValues = listToVector(head);
        // 随机接口检查结果合法性；概率分布需要另行验证。
        Solution localObject(head);
        {
            auto localResult = localObject.getRandom();
            assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());
        }
        {
            auto localResult = localObject.getRandom();
            assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());
        }
        {
            auto localResult = localObject.getRandom();
            assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());
        }
        {
            auto localResult = localObject.getRandom();
            assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());
        }
        {
            auto localResult = localObject.getRandom();
            assert(find(localOriginalValues.begin(), localOriginalValues.end(), localResult) != localOriginalValues.end());
        }
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
