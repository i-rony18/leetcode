class Solution {
public:
    bool winnerOfGame(string s) {
        unordered_map<char,int>map;
        int al=0,bob=0,l=0,r=0,c1=0,c2=0;
        for(;r<s.length();r++){
            if(s[r]=='A')
                c1++;
            else if(s[r]=='B')
                c2++;
            for(;(r-l+1)>3;l++){
                if(s[l]=='A')
                    c1--;
                else if(s[l]=='B')
                    c2--;
            }
            if(c1==3)
                al++;
            else if(c2==3)
                bob++;
        }
        if(al>bob)
            return true;
        else if(al<bob)
            return false;
        return false;
    }
};