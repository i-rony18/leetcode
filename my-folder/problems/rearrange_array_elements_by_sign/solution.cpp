class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> pos;
        vector<int> neg;
        for(auto i : nums)
        {
            if(i > 0){
                pos.push_back(i);
            }
            if(i < 0) {
                neg.push_back(i);
            }
        }
        for(int i = 0 ; i < pos.size() ; i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};