class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size();
        if(n==1||n==0) return 0;
        if(v[0]>v[1]) return 0;
        if(v[n-1]>v[n-2]) return n-1;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1]) return i;
        }
        return -1;
    }
};