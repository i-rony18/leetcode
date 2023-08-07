class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>map;
        vector<pair<int,int>> vect;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto i: map){
          vect.push_back( make_pair(i.second,i.first) );
        }
        sort(vect.begin(),vect.end(),greater<pair <int,int> >());
        for(auto i: vect){
           if(k==0) break;
           ans.push_back(i.second);
           k--;
        }
        return ans;
    }
};