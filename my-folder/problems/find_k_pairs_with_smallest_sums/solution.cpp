class Solution {
public:
    using int2 = pair<int, int>;
    using int3 = tuple<int, int, int>;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        int n1 = nums1.size(), n2 = nums2.size();
        priority_queue<int3, vector<int3>, greater<int3>> pq;
        vector<vector<int>> ans;
        ans.reserve(k);
        set<int2> visited;
        pq.push({nums1[0]+nums2[0], 0, 0});
        visited.insert({0, 0});
        while (!pq.empty()) {
            auto [sum, i, j] = pq.top();
            pq.pop();
            k--;
            ans.push_back({nums1[i], nums2[j]});
            if (k == 0) return ans;
            
            if (i + 1 < n1 && visited.count({i + 1, j}) == 0) {
                pq.push({nums1[i + 1]+nums2[j], i + 1, j});
                visited.insert({i + 1, j});
            } 
            if (j + 1 < n2 && visited.count({i, j + 1}) == 0) {
                pq.push({nums1[i]+nums2[j + 1], i, j + 1});
                visited.insert({i, j+1});
            } 
        }
        return ans;
    }
};