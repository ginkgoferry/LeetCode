/*
 * Problem: 295. 数据流的中位数 / Find Median from Data Stream
 * Link: https://leetcode.cn/problems/find-median-from-data-stream/
 * Chapter: 堆
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


class MedianFinder {
public:
    MedianFinder() {

    }

    void addNum(int num) {

    }

    double findMedian() {

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

#ifdef LOCAL
int main() {
    {
        MedianFinder obj;
        obj.addNum(1);
        obj.addNum(2);
        assert((obj.findMedian() == 1.5));
        obj.addNum(3);
        assert((obj.findMedian() == 2.0));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
