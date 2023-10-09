class Solution {
public:
    vector<int>ans;
    void first_occ(vector<int>& nums, int target){
        int ans1=-1 ;
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
        int mid = end + (start - end)/2;
            if(nums[mid]==target){
                ans1 = mid;
                end = mid - 1;
            }
            else if(nums[mid]<target){
                start = mid+1;

            }
            else{
                end = mid-1;
            }
        }
        ans.push_back(ans1);
    }

    void last_occ(vector<int>& nums, int target){
        int ans2=-1 ;
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
        int mid = end + (start - end)/2;
            if(nums[mid]==target){
                ans2 = mid;
                start = mid + 1;
            }
            else if(nums[mid]<target){
                start = mid+1;

            }
            else{
                end = mid-1;
            }
        }
        ans.push_back(ans2);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        first_occ(nums,target);
        last_occ(nums,target);
        return ans;
    }
};