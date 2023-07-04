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
    ListNode* reverseList(ListNode* head) {
        ListNode* last=NULL;
        ListNode* c=head;
        ListNode* temp;
        while(c!=NULL)
        {
            temp=c->next;
            c->next=last;
            last=c;
            c=temp;
        }
        return last;
    }
};