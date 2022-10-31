//
// Created by Jev on 2022/10/30.
//
//剑指 Offer 16. 数值的整数次方
//实现 pow(x, n) ，即计算 x 的 n 次幂函数（即，x^n）。不得使用库函数，同时不需要考虑大数问题。
//输入：x = 2.00000, n = 10
//输出：1024.00000

#include <cmath>

class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1) return 1.;
        if(n == 0) return 1.;
        if(n == 1) return x;
        if(n == -1) return 1/x;
        double ans = 0;
        if(n > 0) ans = n % 2 == 0 ? myPow(x, n/2) * myPow(x, n/2) : myPow(x, n / 2) * myPow(x, n / 2) * x;
        else ans = n % 2 == 0 ? myPow(x, n/2) * myPow(x, n/2) : myPow(x, n / 2) * myPow(x, n / 2) * 1/x;
        return ans;
    }
};

//class Solution {
//public:
//    double myPow(double x, int n) {
//        if(x == 0.0f) return 0.0;
//        long b = n;
//        double res = 1.0;
//        if(b < 0) {
//            x = 1 / x;
//            b = -b;
//        }
//        while(b > 0) {
//            if((b & 1) == 1) res *= x; // &1 位运算，判断二进制最右位
//            x *= x;
//            b >>= 1; // >>1 位运算，右移1位， 等价与 //2
//        }
//        return res;
//    }
//};
//
//作者：Krahets
//链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/57p2pv/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。