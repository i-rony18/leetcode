class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x : nums) {
            m[x]++;
        }
        int maxi = INT_MIN;
        for(auto x : m) {
            maxi = max(maxi, x.second);
        }
        vector<vector<int>> ans;
        for(int i = 1; i <= maxi; i++) {
            vector<int> temp;
            for(auto x : m) {
                if(x.second >= i) {
                    temp.push_back(x.first);
                }
            }
            ans.push_back(temp);
        }
        
        return ans;
}
};