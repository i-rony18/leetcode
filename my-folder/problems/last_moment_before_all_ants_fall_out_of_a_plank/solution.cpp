class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int t = 0;
        if (!left.empty()) {
            t = *max_element(left.begin(), left.end());
        }
        if (!right.empty()) {
            t = max(t, n - *min_element(right.begin(), right.end()));
        }
        return t;
    }
};