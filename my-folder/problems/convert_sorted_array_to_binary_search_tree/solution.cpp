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
    TreeNode* cbst(vector<int>& nums , int l , int r) {
        if(l <= r) {
            int mid = l + (r - l) / 2;
            TreeNode* key = new TreeNode(nums[mid]);
            
            key -> left = cbst(nums , l , mid - 1);
            key -> right = cbst(nums , mid + 1 , r);
            
            return key;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* head = cbst(nums , 0 , nums.size() - 1);
        return head;
    }
};