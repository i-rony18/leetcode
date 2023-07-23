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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> result;
        if (n == 1) {
            result.push_back(new TreeNode());
            return result;
        }
        if (n % 2 == 0) return result; 
        for (int i = 1; i < n; i += 2) { 
        vector<TreeNode*> leftSubtrees = allPossibleFBT(i);
        vector<TreeNode*> rightSubtrees = allPossibleFBT(n - i-1);
        for (int j = 0; j < leftSubtrees.size(); j++) {
            for (int k = 0; k < rightSubtrees.size(); k++) {
                TreeNode* root = new TreeNode();
                root->left = leftSubtrees[j];
                root->right = rightSubtrees[k];
                result.push_back(root);
                }
            }
        }
        return result;
    }
};