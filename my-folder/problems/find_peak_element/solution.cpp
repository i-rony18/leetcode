class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size();
        int s=0;
        int e=n-1;
        int mid= s +(e-s)/2;
        while(s<e){
            if(v[mid]<v[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid= s +(e-s)/2;
        }
        return mid;
    }
};