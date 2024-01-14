class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(auto i:word1) mp1[i]++;
        for(auto i:word2) mp2[i]++;

        for(auto i:mp1){
            if(mp2.find(i.first)==mp2.end()) return false;
        }

        vector<int>v1;
        vector<int>v2;
        for(auto it:mp1){
            v1.push_back(it.second);
        }

        for(auto it:mp2){
            v2.push_back(it.second);
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        return v1==v2;
    }
};