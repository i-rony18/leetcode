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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
	
    if(head == NULL)
	
        return NULL;
		
    ListNode* slow = head;
    
    int count = 1;
    while(n--){
        cout<<fast->val<<" ";
       fast = fast->next;
    }
    if(fast== NULL)
        return slow->next;
        
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
      slow->next = slow->next->next;
      return head;
    }
};