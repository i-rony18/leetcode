class Solution {
public:
    int maxProduct(vector<string>& words) {
        int len = words.size() - 1, alpha[len + 1], res = 0;
        for (int i = 0, j; i <= len; i++) {
            string tmp = words[i];
            j = 0;
            for (char c: tmp) {
                j |= 1 << (c - 'a');
                if (j == 1000) break;
            }
            alpha[i] = j;
        }
        for (int i = 0; i < len; i++) {
            if (alpha[i] == 1000) continue;
            for (int j = i + 1; j <= len; j++) {
                if (alpha[j] == 1000) continue;
                if ((alpha[i] & alpha[j]) == 0) {
                    res = max(res, int(words[i].size() * words[j].size()));
                }
            }
        }
        return res;
    }
};