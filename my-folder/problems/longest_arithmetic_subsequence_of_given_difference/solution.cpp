class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        map<int,int>a;
        int i=0,m=0;
        for(i=0;i<arr.size();i++)
        {
            if(a.find(arr[i]-d)==a.end()) a[arr[i]]=1;
            else a[arr[i]]=1+a[arr[i]-d];
            m=max(a[arr[i]],m);
        }
        return m;
    }
};