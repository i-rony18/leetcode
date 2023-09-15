class Solution{
    public:

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[0].size();j++) {
            int res;
				if(i < 1 || j < 1) 
                res = matrix[i][j] ;
            else
                res = matrix[i - 1][j - 1]; 
            
            if (matrix[i][j] != res) 
                return false;
        }
    }
    
    return true; 
}
};