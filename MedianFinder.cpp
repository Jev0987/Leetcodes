//
// Created by Jev on 2022/10/26.
//
//剑指 Offer 41. 数据流中的中位数
//如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么中位数就是所有数值排序之后位于中间的数值。
//如果从数据流中读出偶数个数值，那么中位数就是所有数值排序之后中间两个数的平均值。

//例如，
//[2,3,4]的中位数是 3
//[2,3] 的中位数是 (2 + 3) / 2 = 2.5
//设计一个支持以下两种操作的数据结构：
//void addNum(int num) - 从数据流中添加一个整数到数据结构中。
//double findMedian() - 返回目前所有元素的中位数。

//示例
//["MedianFinder","addNum","addNum","findMedian","addNum","findMedian"]
//[[],[1],[2],[],[3],[]]
//输出：[null,null,null,1.50000,null,2.00000]

//输入：
//["MedianFinder","addNum","findMedian","addNum","findMedian"]
//[[],[2],[],[3],[]]
//输出：[null,null,2.00000,null,2.50000]
#include "vector"
using namespace std;
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
    }

    void addNum(int num) {
        nums.push_back(num);
    }

    double findMedian() {
        int length = nums.size();
        if(length == 0) return 0;
        Quicksort(nums, 0, length - 1);
        if(length % 2 != 0) return double(nums[length/2]);
        else return (double(nums[length/2]) + double(nums[length/2 - 1]))/2;
    }
private:
    vector<int> nums;
    void Quicksort(vector<int> &nums, int l, int r){
        if(l >= r) return;
        int i = l, j = r;
        while(i < j){
            while(i < j && nums[j] >= nums[l]) j--;
            while(i < j && nums[i] <= nums[l]) i++;
            swap(nums[i], nums[j]);
        }
        swap(nums[i], nums[l]);
        Quicksort(nums, l, i - 1);
        Quicksort(nums, i + 1, r);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

//当数字个数为奇数（通过两个堆的大小判断，若大小相同则为偶数，不同则为奇数）个时，放在a中，偶数个时放在b中
//class MedianFinder {
//public:
//    priority_queue<int, vector<int>, greater<int>> A; // 小顶堆，保存较大的一半
//    priority_queue<int, vector<int>, less<int>> B; // 大顶堆，保存较小的一半
//    MedianFinder() { }
//    void addNum(int num) {
//        if(A.size() != B.size()) {
//            A.push(num);
//            B.push(A.top());
//            A.pop();
//        } else {
//            B.push(num);
//            A.push(B.top());
//            B.pop();
//        }
//    }
//    double findMedian() {
//        return A.size() != B.size() ? A.top() : (A.top() + B.top()) / 2.0;
//    }
//};
//
//作者：Krahets
//链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/5v0zcc/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。