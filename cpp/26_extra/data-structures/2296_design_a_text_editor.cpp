/*
 * Problem: 2296. 设计一个文本编辑器 / Design a Text Editor
 * Link: https://leetcode.cn/problems/design-a-text-editor/
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

class TextEditor {
public:
    TextEditor() {
        // TODO: 在这里实现你的解法。
    }
    
    void addText(string text) {
        // TODO: 在这里实现你的解法。
        (void)text;
    }
    
    int deleteText(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
    
    string cursorLeft(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
    
    string cursorRight(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        TextEditor localObject;
        {
            string text = "leetcode";
            localObject.addText(text);
        }
        {
            int k = 4;
            auto localResult = localObject.deleteText(k);
            int expected = 4;
            assert((localResult == expected));
        }
        {
            string text = "practice";
            localObject.addText(text);
        }
        {
            int k = 3;
            auto localResult = localObject.cursorRight(k);
            string expected = "etpractice";
            assert((localResult == expected));
        }
        {
            int k = 8;
            auto localResult = localObject.cursorLeft(k);
            string expected = "leet";
            assert((localResult == expected));
        }
        {
            int k = 10;
            auto localResult = localObject.deleteText(k);
            int expected = 4;
            assert((localResult == expected));
        }
        {
            int k = 2;
            auto localResult = localObject.cursorLeft(k);
            string expected = "";
            assert((localResult == expected));
        }
        {
            int k = 6;
            auto localResult = localObject.cursorRight(k);
            string expected = "practi";
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
