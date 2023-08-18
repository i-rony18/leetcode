class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<vector<int>> v(10, vector<int>());
	    for (int n : nums) {
		int maxDgt = -1, curN = n;
		while (curN) {
			maxDgt = max(maxDgt, curN % 10);
			curN /= 10;
		}
		v[maxDgt].push_back(n);
	    }
	    int maxSum = -1;
	    for (int i = 9; i >= 0; i--) {
		if (v[i].size() > 1) {
			sort(begin(v[i]), end(v[i]), [](int a, int b)
											{ return a > b; });
			maxSum = max(maxSum, v[i][0] + v[i][1]);
		}
	    }
	    return maxSum;
    }
};