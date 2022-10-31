//
// Created by Jev on 2022/10/31.
//
//剑指 Offer 15. 二进制中 1 的个数
//编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 '1' 的个数（也被称为 汉明重量).）。

//输入：n = 11 (控制台输入 00000000000000000000000000001011)
//输出：3
//解释：输入的二进制串 00000000000000000000000000001011中，共有三位为 '1'。

#include <cstdint>
#include "iostream"
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n != 0){
            ans += n & 1;
            n >>= 1;
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.hammingWeight(0)<<endl;
}