class Solution {
public:
    long long ans = LONG_MAX;
    void check(string s,int idx,unordered_map<int,int>&mp,long long x)
    {
        if(idx==s.size())
        {
            ans = min(ans,x);
            return;
        }
        
        for(int i=1;i<=10;i++)
        {
            if(mp.find(i)!=mp.end())continue;
            if(idx==-1)
            {
                mp[i]++;
                    x = (x*10)+i;
                    check(s,idx+1,mp,x);
                    x/=10;
                 mp.erase(i);
            }
            else if(s[idx]=='I')
            {
                if(i>(x%10))
                {
                     mp[i]++;
                     x = (x*10)+i;
                    check(s,idx+1,mp,x);
                     x/=10;
                    mp.erase(i);
                }
            }
            else
            {
                if(i<(x%10))
                {
                     mp[i]++;
                    x = (x*10)+i;
                    check(s,idx+1,mp,x);
                    x/=10;
                    mp.erase(i);
                }
            }
        }
        return;
    }
    string smallestNumber(string pattern) {
      ans = LONG_MAX;
        unordered_map<int,int>mp;
        long long s = 0;
        check(pattern,-1,mp,s);
        return to_string(ans);
    }
};