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
    vector<TreeNode*> solve(int l,int r)
    {
       vector<TreeNode*>ans;
        if(l>r)
       {
            ans.push_back(NULL);
            return ans;
        }
        if(l==r)
        {
            ans.push_back(new TreeNode(l));
            return ans;
        }
         for(int i=l;i<=r;i++)
        {
             int mid=(l+r)/2;
             vector<TreeNode*>left=solve(l,i-1);
             vector<TreeNode*>right=solve(i+1,r);
             for(auto l:left)
             {
                 for(auto r:right)
                 {
                   TreeNode* root=new TreeNode(i);
                     root->left=l;
                     root->right=r;
                     ans.push_back(root);
                 }
             }
        }
       return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
};