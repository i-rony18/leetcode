class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int r=0;
        string res="";
        while(r<(s.size()/2)){
            res+=s[r];
            string temp=res;
            while(temp.size()<s.size()) temp+=res;
            if(temp==s)  return true;
            r++;
        }
        return false;
    }
};