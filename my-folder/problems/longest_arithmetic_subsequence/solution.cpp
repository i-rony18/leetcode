class Solution {
public:
    
    int longestArithSeqLength(vector<int>& arr) {
        int res = 2,n = arr.size();
        for(int j=-500;j<=500;j++)
        {
            vector<int> mp(1501,-1);
            int result = INT_MIN;

            for(int i=0;i<n;i++)
            {
                if(mp[arr[i]-j+500] == -1)
                {
                    mp[arr[i]+500] = 1;
                }
                else
                {
                    mp[arr[i]+500] = mp[arr[i]-j+500]+1;
                    res = max(res,mp[arr[i]+500]);
                }
            }
            
            res = max(res,result);
        }
        return res;
    }
};