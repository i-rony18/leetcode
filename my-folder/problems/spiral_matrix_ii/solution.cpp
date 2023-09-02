class Solution {
    public: 
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int col_start = 0, col_end = n - 1;
        int row_start = 0, row_end = n - 1;
        int element = 1;
        while(col_start <= col_end && row_start <= row_end) {
            for(int j = col_start; j <= col_end; j++) {
                matrix[row_start][j] = element++;
            }
            for(int i = row_start + 1; i <= row_end; i++) {
                matrix[i][col_end] = element++;
            }
            for(int j = col_end - 1; j >= col_start; j--) {
                matrix[row_end][j] = element++;
            }
            for(int i = row_end - 1; i > row_start; i--) {
                matrix[i][col_start] = element++;
            }
            col_start++;
            col_end--;
            row_start++;
            row_end--;
        }
        return matrix;
    }
};