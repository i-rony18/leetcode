class Solution {
public:
    int maximumDifference(vector<int>& A) {
        int N = A.size(), ans = -1;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                if (A[i] < A[j]) ans = max(ans, A[j] - A[i]);
            }
        }
        return ans;
    }
};