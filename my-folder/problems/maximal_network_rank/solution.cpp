vector<int> G[100];
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        for(int i = 0; i < n; i += 1) G[i].clear();
        for(int i = 0; i < roads.size(); i += 1){
            G[roads[i][0]].push_back(i);
            G[roads[i][1]].push_back(i);
        }
        int ans = 0;
        for(int i = 0; i < n; i += 1)
            for(int j = i + 1; j < n; j += 1){
                int pans = 0;
                for(int x = 0, y = 0; x < G[i].size() or y < G[j].size();){
                    if(x == G[i].size()){
                        pans += 1;
                        y += 1;
                    }
                    else if(y == G[j].size()){
                        pans += 1;
                        x += 1;
                    }
                    else if(G[i][x] < G[j][y]){
                        pans += 1;
                        x += 1;
                    }
                    else if(G[i][x] > G[j][y]){
                        pans += 1;
                        y += 1;
                    }
                    else{
                        x += 1;
                        y += 1;
                        pans += 1;
                    }
                }
                ans = max(ans, pans);
            }
        return ans;
    }
};