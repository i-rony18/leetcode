/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return 0;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            head = head->next;
            if(head == fast) return 1;
        }
        return 0;
    }
};