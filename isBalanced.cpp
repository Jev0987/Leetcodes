//
// Created by Jev on 2022/10/27.
//

//剑指 Offer 55 - II. 平衡二叉树
//输入一棵二叉树的根节点，判断该树是不是平衡二叉树。如果某二叉树中任意节点的左右子树的深度相差不超过1，那么它就是一棵平衡二叉树。
//给定二叉树 [3,9,20,null,null,15,7]
//    3
//   / \
//  9  20
//    /  \
//   15   7
//返回 true

#include <cmath>
#include <opencl-c.h>

//       1
//      / \
//     2   2
//    / \
//   3   3
//  / \
// 4   4
//false
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        else return abs(dfs(root->left) - dfs(root->right)) < 2 && isBalanced(root->left) && isBalanced(root->right);
    }
private:
    int dfs(TreeNode* root){
        if(root == nullptr) return 0;
        return max(dfs(root->left), dfs(root->right))+1;
    }
};


//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//        return recur(root) != -1;
//    }
//private:
//    int recur(TreeNode* root) {
//        if (root == nullptr) return 0;
//        int left = recur(root->left);
//        if(left == -1) return -1;
//        int right = recur(root->right);
//        if(right == -1) return -1;
//        return abs(left - right) < 2 ? max(left, right) + 1 : -1;
//    }
//};
//
//class Solution {
//public:
//    bool isBalanced(TreeNode* root) {
//        if (root == nullptr) return true;
//        return abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//    }
//private:
//    int depth(TreeNode* root) {
//        if (root == nullptr) return 0;
//        return max(depth(root->left), depth(root->right)) + 1;
//    }
//};
//
//作者：Krahets
//链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/9hscjv/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。