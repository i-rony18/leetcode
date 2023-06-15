class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;
        vector<int>v{-1,-1};

        while(start<=end){
            int mid=start +(end-start)/2;
            if(target <nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                v[0]=mid;
                end=mid-1;
            }
        }
        start=0;
        end = nums.size()-1;
        while(start<=end){

            int mid=start +(end-start)/2;
            if(target <nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                v[1]=mid;
                start=mid+1;
            }
        }

        return v;
    }
};