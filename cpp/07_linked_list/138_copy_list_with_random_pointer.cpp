/*
 * Problem: 138. 随机链表的复制 / Copy List with Random Pointer
 * Link: https://leetcode.cn/problems/copy-list-with-random-pointer/
 * Chapter: 链表
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


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        Node* head = buildRandomList(vector<pair<int, optional<int>>>{{7, nullopt}, {13, 0}, {11, 4}, {10, 2}, {1, 0}});
        Node* copied = solution.copyRandomList(head);
        assert((randomListToVector(copied) == vector<pair<int, optional<int>>>{{7, nullopt}, {13, 0}, {11, 4}, {10, 2}, {1, 0}}));
        if (head != nullptr && copied != nullptr) {
            assert((head != copied));
        }
        freeRandomList(head);
        freeRandomList(copied);
    }
    {
        Node* head = buildRandomList(vector<pair<int, optional<int>>>{{1, 1}, {2, 1}});
        Node* copied = solution.copyRandomList(head);
        assert((randomListToVector(copied) == vector<pair<int, optional<int>>>{{1, 1}, {2, 1}}));
        if (head != nullptr && copied != nullptr) {
            assert((head != copied));
        }
        freeRandomList(head);
        freeRandomList(copied);
    }
    {
        Node* head = buildRandomList(vector<pair<int, optional<int>>>{{3, nullopt}, {3, 0}, {3, nullopt}});
        Node* copied = solution.copyRandomList(head);
        assert((randomListToVector(copied) == vector<pair<int, optional<int>>>{{3, nullopt}, {3, 0}, {3, nullopt}}));
        if (head != nullptr && copied != nullptr) {
            assert((head != copied));
        }
        freeRandomList(head);
        freeRandomList(copied);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
