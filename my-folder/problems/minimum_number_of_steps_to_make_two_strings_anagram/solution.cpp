class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> freq;
        int n=s.size();
        for(auto it: s){
            freq[it]++;
        }
        for(auto it: t){
            freq[it]--;
        }

        int ans=0;
        for(auto it: freq){
            if(it.second>0){
                ans+=it.second;
            }
        }
        return ans;
    }
};