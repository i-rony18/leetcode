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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head) return nullptr;
        ListNode* dummy = new ListNode(0,head);
        head = dummy;
        ListNode* curr = head->next; 
        ListNode* prev = dummy;
        for(int i = 0; i < left - 1; i++) {
            prev = curr;
            curr=curr->next;
        }
        ListNode* left_prev = prev;
        prev = nullptr;
        for(int i = 0; i < right - left + 1; i++) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        left_prev->next->next = curr;
        left_prev->next = prev;

        return dummy->next;
    }
};