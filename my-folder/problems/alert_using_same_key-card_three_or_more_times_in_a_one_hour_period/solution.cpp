class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        vector<string> ans;
        if(keyName.size()<=2){
            return ans;
        }
        map<string,set<int>> m;
        for(int i=0;i<keyName.size();i++){
            int time = stoi(keyTime[i].substr(0, 2)) * 60 + stoi(keyTime[i].substr(3));
            m[keyName[i]].insert(time);
        }
        for(auto it:m){
            vector<int> temp;
            for(auto i:it.second){
                temp.push_back(i);
            }
            for(int i=0;i<temp.size()-2;i++){
                if((temp[i+2]-temp[i])<=60){
                    ans.push_back(it.first);
                    break;
                }
            }
        }
        return ans;
    }
};
