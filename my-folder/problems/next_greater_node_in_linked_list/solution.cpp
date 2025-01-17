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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vc;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            int val=temp->val;
            ListNode* tr=temp;
            while(tr!=NULL){
                if(tr->val>val){
                    vc.push_back(tr->val);
                    c--;
                    break;
                }
                
                tr=tr->next;
                if(tr==NULL){
                    vc.push_back(0);
                }
            }
            c++;
            temp=temp->next;
        }
        return vc;
    }
};