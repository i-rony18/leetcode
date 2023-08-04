class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int c=1;
        for(int i=d.size()-1;i>=0;i--)
        {
            int f=d[i]+c;
            d[i]=f%10;
            c=f/10;
        }
        if(c!=0)
        {
            reverse(d.begin(),d.end());
            d.push_back(c);
            reverse(d.begin(),d.end());
        }
        return d;
    }
};