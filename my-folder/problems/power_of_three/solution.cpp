class Solution {
public:
    bool isPowerOfThree(int n) {
        int low=0;int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            cout<<mid<<" ";
            if(n==pow(3,mid)) return true;
            else if(n<pow(3,mid)) high=mid-1;
            else low=mid+1;
        } 
        return false;
    }
};