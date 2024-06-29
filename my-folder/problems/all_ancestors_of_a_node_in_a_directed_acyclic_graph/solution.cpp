class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans(n), directChild(n);
        for(auto &it: edges){
            directChild[it[0]].push_back(it[1]);
        }

        for(int i=0; i<n; i++){
           dfs(i , i, ans, directChild);
        }
        return ans;
    }

    void dfs( int x,  int current,  vector<vector<int>> &ans,  vector<vector<int>> &directChild){
         for(auto &it : directChild[current]){
            if(ans[it].size() == 0 || ans[it].back() != x){
                ans[it].push_back(x);
                dfs(x, it, ans, directChild);
            }
         }
    }


};