class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string a;
        map<char,int>mp;
        mp[s[0]]++;
        a+=s[0];
        for(int i=1;i<n;i++){
       if(s[i]!=s[i-1]) mp.clear();
       mp[s[i]]++;
       if(mp[s[i]]<3) a.push_back(s[i]);
       else continue;
        }
        return a;
    }
};