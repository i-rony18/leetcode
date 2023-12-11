class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> map;
        
        for(int i=0;i<nums.size(); i++){
            map[nums[i]]++;
        }
        vector<int> v;

       int max, ans = 0, count = 0;
        while(count < k){
            max = 0;
            for(auto it=map.begin(); it!=map.end(); it++){
                if(it->second > max){
                    max= it->second;
                    ans = it->first;
                }
            }

            v.push_back(ans);
            map.erase(ans);
            count++;
        }

        return v;
    }
};