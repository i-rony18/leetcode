class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row=rowSum.size();
        int col=colSum.size();
        vector<vector<int>>ans(row,vector<int>(col,0));
        int gridmin;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                gridmin=min(rowSum[i], colSum[j]);
                ans[i][j]=gridmin;
                rowSum[i]-=gridmin;
                colSum[j]-=gridmin;
    
            }
        }
        return ans;
    }
};