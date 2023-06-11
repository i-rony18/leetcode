class Solution {
public:
    string smallestString(string s) {
        int ind=-1,n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a')
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)      
        {
            s[n-1]='z';
            return s;
        }
        for(int i=ind;i<n;i++)
        {
            if(s[i]!='a'){    
                s[i]--;
            }
            else {
                break;
                }            
        }
        return s;
    }
};