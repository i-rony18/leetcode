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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto e:nums){
            mp[e]++;
        }
        int count=0;
        bool flag=true;  
        while(head){
          if(mp.find(head->val)!=mp.end() && flag){
               count++;
               flag=false;
           } 
        else if(mp.find(head->val)==mp.end()) flag=true;
        head=head->next;
        }
        return count;
    }
};