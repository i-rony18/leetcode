class Solution {
public:
    int maxSubArray(vector<int>&arr) {
        int n=arr.size();
        int val=arr[0];
        for(int i=1;i<n;i++){
            arr[i]=max(arr[i],arr[i-1]+arr[i]);
            val=max(val,arr[i]);
        }
        return val;
    }
};