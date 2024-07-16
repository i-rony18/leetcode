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
    TreeNode *LCA(TreeNode*root,int p,int q){
        if(root==nullptr||root->val==p||root->val==q)
            return root;
        TreeNode*left =LCA(root->left,p,q);
        TreeNode*right = LCA(root->right,p,q);
        if(left==nullptr) return right;
        else if(right==nullptr) return left;
        else return root;
    }
    string ll,rr;
    void dfs(TreeNode*root,string &l,int p,int q){
        if(root==NULL) return;
        if(root->val==p) ll = l;
        if(root->val==q) rr = l;
        l+='L';
        dfs(root->left,l,p,q);
        l.pop_back();
        l+='R';
        dfs(root->right,l,p,q);
        l.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
       TreeNode *node = LCA(root,startValue,destValue);
       string l="";
       dfs(node,l,startValue,destValue);
       string ans="";
       for(auto it:ll)
        ans+='U';
        for(auto it:rr)
            ans+=it;
        return ans;
        
    }
};