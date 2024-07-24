class Solution {
public:

    int mapper(vector<int>&mapping , int num){
        int mapped=0;
        int place=1;
        if (num == 0) {
            return mapping[0];
        }
        while(num>0){
            int dig=num%10;
            mapped+=place * mapping[dig];
            num/=10;
            place*=10;
        }
        return mapped;
    }



     vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> result;
        vector<pair<int, int>> mappedValuesWithIndex;
        for (int i = 0; i < nums.size(); i++) {
            int mappedValue = mapper(mapping, nums[i]);
            mappedValuesWithIndex.push_back({mappedValue, i});
        }
        sort(mappedValuesWithIndex.begin(), mappedValuesWithIndex.end());
        for (const auto& pair : mappedValuesWithIndex) {
            result.push_back(nums[pair.second]);
        }
        return result;
    }
};