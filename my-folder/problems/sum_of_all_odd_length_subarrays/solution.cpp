class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i; j<arr.size(); j++)
            {
                if((j-i)%2==0)
                {
                    //if(j==i) 
                        //sum+=arr[j];
                    //else 
                        for(int k=i; k<=j; k++)
                            sum+=arr[k];
                }
            }
        }
        return sum;
    }
};