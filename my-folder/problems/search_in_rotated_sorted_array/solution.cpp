class Solution {
public:
    int getpivot(vector<int>&nums,int start,int end)
    {
       while(start<end)
        {  int mid=start+(end-start)/2;
           if(nums[mid]>=nums[0])
           {
               start=mid+1;
           }   
           else
           {
               end=mid;
           }
        }
        return start;
    }
     int binarySearch(vector<int>&nums,int start,int end,int target)
    {
        while(start<=end)
            { 
              int mid=start+(end-start)/2;
                if(nums[mid]==target)
                {
                    return mid; 
                }
                else if(nums[mid]<target)
                {
                    start=mid+1;
                }   
                else
                {
                    end=mid-1;
                }
            }
            return -1;
    }
    int search(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size()-1;
        int end=nums.size()-1;
       int pivot=getpivot(nums,start,end);
       
       if(target>=nums[pivot] && target<=nums[nums.size()-1])
       {
           return binarySearch(nums,pivot,n,target);
       }
       else
       {
           return binarySearch(nums,0,pivot-1,target);
       }
      
    }
};