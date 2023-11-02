/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum (TreeNode* root){
        if(root == NULL) return 0;
        int left = sum(root->left);
        int right = sum(root->right);
        return left+right+root->val;
    }
    int count (TreeNode* root){
        if(root == NULL) return 0;
        int left = count(root->left);
        int right = count(root->right);
        return left+right+1;
    }
    int solve(TreeNode* root){
        if(root == NULL) return 0;
        int sumOfNodes = sum(root);
        int countOfNode = count(root);
        if(sumOfNodes/countOfNode == root->val) return 1 + solve(root->left) + solve(root->right);
        return  solve(root->left) + solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        return solve(root);
    }
};