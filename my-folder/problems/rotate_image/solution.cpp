class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int a = matrix.size();
        int b= matrix[0].size();
        vector<vector<int>> buffer(a, vector<int>(b, 0));
        for(int i=0; i<a; i++){
            for(int j=0; j<a; j++){
                buffer[j][a-i-1] = matrix[i][j];

            }
        }
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                matrix[i][j] = buffer[i][j];
            }
        }
    }
};