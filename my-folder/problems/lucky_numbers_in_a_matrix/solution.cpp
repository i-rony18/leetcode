class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res; 
        unordered_map<int,int> row;  
        for(int i = 0; i < matrix.size(); i++) {
            int mini=INT_MAX; 
            for(int j = 0; j < matrix[0].size(); j++) {
                mini = min(mini, matrix[i][j]);  
            }
            row[mini]++;  
        }
        for(int i = 0; i < matrix[0].size(); i++) {
            int maxi = 0;  
            for(int j = 0; j < matrix.size(); j++) {
                maxi = max(maxi, matrix[j][i]); 
            }
            
            if(row.find(maxi) != row.end()) {
                res.push_back(maxi);  
            }
        }
        return res;  
    }
};