//
// Created by Jev on 2022/10/29.
//
//
// Created by Jev on 2022/10/28.
//
//剑指 Offer 68 - I. 二叉搜索树的最近公共祖先
//给定一个二叉搜索树, 找到该树中两个指定节点的最近公共祖先。
//百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，
// 满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#include "queue"
using namespace std;
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    }

};

//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if(root == nullptr || root == p || root == q) return root; // 越过叶子节点返回空，如果找到p ，q 则返回
//        TreeNode *left = lowestCommonAncestor(root->left, p, q); // 左子树
//        TreeNode *right = lowestCommonAncestor(root->right, p, q); // 右子树
//        if(left == nullptr) return right; // 根据当前遍历的节点，若左子树找不到p ，q 则返回右子树遍历返回值
//        if(right == nullptr) return left; //同上
//        return root; // 返回
//    }
//};
//
//作者：Krahets
//链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/57o72e/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。