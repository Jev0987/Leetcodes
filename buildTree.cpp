//
// Created by Jev on 2022/10/30.
//

//剑指 Offer 07. 重建二叉树
//某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。
//
//假设输入的前序遍历和中序遍历的结果中都不含重复的数字。

//Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
//Output: [3,9,20,null,null,15,7]

#include "vector"
#include "unordered_map"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root = new TreeNode(preorder.front());
        TreeNode *ans = root;
        for (int i = 0; i < inorder.size(); ++i) {
            if(inorder[i] == root->val) dic[inorder[i]] = i;
        }
        build(inorder, preorder, 0);
        return ans;

    }
private:
    unordered_map<int, int> dic;
    void build(vector<int>& inorder, vector<int>& preorder, int i){

    }
};
//
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        this->preorder = preorder;
//        for(int i = 0; i < inorder.size(); i++)
//            dic[inorder[i]] = i;
//        return recur(0, 0, inorder.size() - 1);
//    }
//private:
//    vector<int> preorder;
//    unordered_map<int, int> dic;
//    TreeNode* recur(int root, int left, int right) {
//        if(left > right) return nullptr;                        // 递归终止
//        TreeNode* node = new TreeNode(preorder[root]);          // 建立根节点
//        int i = dic[preorder[root]];                            // 划分根节点、左子树、右子树
//        node->left = recur(root + 1, left, i - 1);              // 开启左子树递归
//        node->right = recur(root + i - left + 1, i + 1, right); // 开启右子树递归  i-left = 左子树长度！！！！！
//        return node;                                            // 回溯返回根节点
//    }
//};
//
//作者：Krahets
//链接：https://leetcode.cn/leetbook/read/illustration-of-algorithm/99ljye/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。