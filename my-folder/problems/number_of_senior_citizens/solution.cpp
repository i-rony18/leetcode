class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0, age;
        for (auto &code: details) {
            age = (code[11] - '0') * 10 + (code[12] - '0');
            if (age > 60) res++;
        }
        return res;
    }
};