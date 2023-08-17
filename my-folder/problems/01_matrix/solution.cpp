class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> q;
        vector<vector<int>> dis(mat.size(), vector<int> (mat[0].size(), INT_MAX));
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 0) {
                    dis[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        while (!q.empty()) {
            pair<int, int> x = q.front();
            q.pop();
            vector<int> di{-1, 0, 1, 0, -1};
            for (int i = 0; i < 4; i++) {
                int a = x.first + di[i];
                int b = x.second + di[i + 1];
                if (a >= 0 && b >= 0 && a < mat.size() && b < mat[0].size()) 
                if (dis[a][b] > dis[x.first][x.second]) {
                    dis[a][b] = dis[x.first][x.second]+1;
                    q.push({a, b});
                }
            }
        }
        return dis;
    }
};