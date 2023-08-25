class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,int>ourmap;
        for(int i=0;i<jewels.size();i++)
        {
            ourmap[jewels[i]]++;
        } 
        for(int i=0;i<stones.size();i++)
        {
           ans=ans + ourmap[stones[i]];
        }
        return ans;
    }
    
};