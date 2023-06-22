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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* dummyHead = new ListNode(-1);
        ListNode* dummyTail = dummyHead;
        dummyTail->next = curr;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                while(curr->next != NULL && curr->val == curr->next->val){
                    curr = curr->next;
                }
                dummyTail->next = curr->next;
                curr = curr->next;
            }
            else{
                dummyTail = curr;
                curr = curr->next;
            }
        }
        return dummyHead->next;
    }
};