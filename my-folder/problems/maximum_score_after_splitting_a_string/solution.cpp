class Solution {
public:
    int maxScore(string s) {
        int Max = 0;
        for (int i = 1; i < s.length(); ++i) {
            int maxx = count(s.begin(), s.begin() + i, '0') + count(s.begin() + i, s.end(), '1');
            Max = max(Max, maxx);
        }
        return Max;
    }
};