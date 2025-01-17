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
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(), v.end());
        ListNode* root=NULL;
        for(int i=v.size()-1; i>=0; i--){
            ListNode* temp=new ListNode;
            temp->val=v[i];
            temp->next=root;
            root=temp;
        }
        return root;
    }
};