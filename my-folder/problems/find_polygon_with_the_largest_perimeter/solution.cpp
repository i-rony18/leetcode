class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n == 3 and  nums[0] + nums[1] <= nums[2]){
           return -1;
        }
        vector<long long> array(n);
        array[0] = nums[0];
        for(int i = 1; i < n ; i++){
            array[i] = array[i-1] + nums[i];
        }
        for(int i = n-1; i > 1; i--){
            if(array[i-1] > nums[i]){
                return array[i];
            }
        }
        return -1;

    }
};