class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long length = 0;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (isalpha(s[i])) {
                length++;
            } else {
                length *= (s[i] - '0');
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            k %= length;
            if (k == 0 && isalpha(s[i])) {
                return string(1, s[i]);
            }
            if (isdigit(s[i])) {
                length /= (s[i] - '0');
            } else {
                length--;
            }
        }
        
        return "";
    }
};