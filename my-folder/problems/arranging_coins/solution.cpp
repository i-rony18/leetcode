class Solution {
public:
	int arrangeCoins(int n) {
		int i=1;
		int j=n;
		int ans = 0;
		while(i<=j){
			long long int mid=i+(j-i)/2;
			long long int coins=mid*(mid+1)/2;
			if(n>=coins){
				ans=mid;
				i=mid+1;
			}
			else{
				j=mid-1;
			}
		}
		return ans;

	}
};