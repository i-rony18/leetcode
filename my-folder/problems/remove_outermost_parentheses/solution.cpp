
class Solution {
public:
    string removeOuterParentheses(string s) {
   int n=s.size();
   string p;
   int c=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='(')
       {c++;}
       else if(s[i]==')')
       {c--;}
        if( c!=1 && s[i]=='(')
        {p+=s[i];}
        else if(c!=0 && s[i]==')')
        {
            p+=s[i];
        }
   }
   return p;
    }
};