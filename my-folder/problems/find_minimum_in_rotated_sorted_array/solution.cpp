class Solution {
public:
    int findMin(vector<int>& arr) {
        int n= arr.size();
        int low= 0, high = n-1;
        int mini = INT_MAX, left = INT_MAX, right= INT_MAX;
        while(low < high){
                if(arr[low] < arr[high]) return arr[low];

            int mid= low + (high-low)/2;
            if(arr[low] <= arr[mid]){
                
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return arr[low];
    }
};