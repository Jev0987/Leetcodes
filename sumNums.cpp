//
// Created by Jev on 2022/10/28.
//
//剑指 Offer 64. 求 1 + 2 + … + n
//求 1+2+...+n ，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
//输入: n = 3
//输出: 6
class Solution {
public:
    int sumNums(int n) {
        int sum = 0;
    }
};
//
//class Solution {
//public:
//    int sumNums(int n) {
//        n > 1 && (n += sumNums(n - 1));
//        return n;
//    }
//};
//
//作者：Krahets
//        链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/9h1gyt/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。