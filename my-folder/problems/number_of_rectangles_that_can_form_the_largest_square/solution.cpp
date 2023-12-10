class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto it:rectangles){
            int m=min(it[0],it[1]);
            ans=max(ans,m);
            mp[m]++;
        }
        
        return mp[ans];

    }
};