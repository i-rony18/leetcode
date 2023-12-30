class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mp;
        int n= words.size();
        for(auto it: words){
            for(auto s: it){
                mp[s]++;
            }
        }
        for(auto i:mp){
            if (i.second %n){
                return false;
            }
            
        }
        return true;
    }
};