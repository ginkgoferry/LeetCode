/*
 * Problem: 1286. 字母组合迭代器 / Iterator for Combination
 * Link: https://leetcode.cn/problems/iterator-for-combination/
 * Chapter: 树与回溯
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

class CombinationIterator {
public:
    CombinationIterator(string characters, int combinationLength) {
        // TODO: 在这里实现你的解法。
        (void)characters;
        (void)combinationLength;
    }
    
    string next() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool hasNext() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        string characters = "abc";
        int combinationLength = 2;
        CombinationIterator localObject(characters, combinationLength);
        {
            auto localResult = localObject.next();
            string expected = "ab";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            string expected = "ac";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            string expected = "bc";
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = false;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
