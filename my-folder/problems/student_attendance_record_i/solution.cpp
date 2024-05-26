class Solution {
public:
    bool checkRecord(string s) {
        int n=s.size();
        int countAbs=0;
        for(int i=0; i<n; i++){
            if(s[i]=='A'){
                countAbs++;
            }
            if (countAbs>=2) return false;
            
            if(s[i]=='L' && s[i]==s[i+1] && s[i+1]==s[i+2]){
                return false;
            }
        }
    return true;

    }
};