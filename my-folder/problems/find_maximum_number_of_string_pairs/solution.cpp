class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
    int count = 0;
    for(int i = 0; i < words.size(); i++){
        string str = words[i];
        for(int j = i+1; j < words.size(); j++){
            string s = words[j];
            string st;
            reverse(s.begin(),s.end());        
            if(str == s){
                count++;
            }
        }
    }
    return count;
    }
};