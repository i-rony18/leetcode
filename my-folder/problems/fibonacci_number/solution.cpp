class Solution {
public:
	int ans(vector<int>& v, int n){
		if(n<=1){
			return n;
		}
		if(v[n]!=-1){
			return v[n];
		}
		return ans(v, n-1)+ans(v, n-2);
	}
	int fib(int n) {
		vector<int>v(n+1, -1);
		return ans(v, n);
	}
};