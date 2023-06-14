class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> s;
        int x,cnt=1,maxlen=0;
        for(int i=0;i<arr.size();i++)
        {
            s.insert(arr[i]);
        }
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                cnt=1;
                x=it+1;
                while(s.find(x)!=s.end())
                {
                    cnt++;
                    x=x+1;
                }
                maxlen=max(maxlen,cnt);
            }
        }
        return maxlen;
    }
};