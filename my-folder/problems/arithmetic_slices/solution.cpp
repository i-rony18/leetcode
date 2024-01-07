class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n= nums.size();
        if(n<3)return 0;
        int ans=0;
        vector<int> diff;
        for(int i=1;i<n;i++){
            diff.push_back(nums[i]-nums[i-1]);
        }
        
        n--;
        int i=0,j=0;
        while(j<n){
            while(j<n && diff[j]==diff[i]){
                if(j!= i)ans+= (j-i);
                j++;
            }
            i=j;
        }
    
        return ans;
    }
};