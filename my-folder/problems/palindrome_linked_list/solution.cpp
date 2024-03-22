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
    bool isPalindrome(ListNode* head) {
        vector<int> value;
        while (head){
            value.push_back(head->val);
            head=head->next;
        }

        int left=0, right= value.size()-1;
        while(left<right && value[left]==value[right]){
            left++;
            right--;
        }
        if(left>=right){
            return true;
        }
        return false;
    }
};