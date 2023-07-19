class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int c=0;
        int l=0,r=1;
        while(r<in.size())
        {
            if(in[l][1]<=in[r][0]){
                l=r;
                r++;
            }
            else if(in[l][1]<=in[r][1]){
                c++;
                r++;
            }
            else if(in[l][1]>=in[r][1]){
                c++;
                l=r;
                r++;
            }
        }
        return c;
    }
};