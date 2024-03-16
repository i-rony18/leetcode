class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        int zero=0, one=0, len=0;
        freq[0]=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==0) ++zero;
            else{
                ++one;
            }
            int difference= zero - one;
            if(freq.count(difference)){
                len=max(len, i-freq[difference]);
            }
            else{
                freq[difference]=i;
            }
        }
        return len;
    }
};