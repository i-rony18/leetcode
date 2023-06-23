/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* heightBST(vector<int>&ans,int s,int e){
        if(s > e){
            return NULL;
        }
        int mid = s + (e-s)/2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left = heightBST(ans,s,mid-1);
        root->right = heightBST(ans,mid+1,e);
        return root;
    }
    void sorted(vector<int>&ans, ListNode* head){
        if(head==NULL){
            return;
        }
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        return;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>ans;
        sorted(ans,head);
        TreeNode* root= heightBST(ans,0,ans.size()-1);
        return root;
    }
};