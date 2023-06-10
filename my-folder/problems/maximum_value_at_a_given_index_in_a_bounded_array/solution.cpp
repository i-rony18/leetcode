class Solution {
public:
    long long cal(long long count,long long val)
    {   
        long long s=0;
        long long rem=val-count;
        if(count==val)
            s=(val*(val+1))/2;
        else if(count>val)
            s=(val*(val+1))/2+count-val;
        else
            s=(val*(val+1))/2-(rem*(rem+1))/2;
        return s;
    }
    int check(int m,int i,int s,int n)
    {
      long long leftCount,rightCount;
      leftCount=i;
      rightCount=n-i-1;
      long long val=m-1;
      long long leftSum=cal(leftCount,val);
      long long rightSum=cal(rightCount,val);
      long long totalSum=m+leftSum+rightSum;
      return totalSum<=s;

    }
    int maxValue(int n, int i, int s) {
        int l=1,h=s;
        int ans=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            int k=check(m,i,s,n);
            if(k==1)
            {
                ans=m;
                l=m+1;
            }
            else
                h=m-1;
        }
        return ans;
    }
};