class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,k,c=0;
        i=s.size()-1;
        while(i>=0 and s[i]==' ')
        i--;
        for(;i>=0;i--){
            if(s[i]==' ' and c!=0)
            return c;
            c++;
        }
        return c;
        
    }
};