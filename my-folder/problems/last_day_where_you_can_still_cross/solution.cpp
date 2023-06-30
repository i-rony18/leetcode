class Solution {
public:
    int r,c;
    int dR[4]={0,0,1,-1};
    int dC[4]={1,-1,0,0};

     bool dfs(int row,int col,vector<vector<int>> &mat){
        if(row==r-1) return true;
        mat[row][col]=1;
        for(int k=0;k<4;k++){
            int nr=row+dR[k];
            int nc=col+dC[k];
            if(nr>=0 && nr<r && nc>=0 && nc<c && mat[nr][nc]==0){
                mat[nr][nc]=1;
                if(dfs(nr,nc,mat)) return true;
            }
        }
        return false;
    }

    bool isPosstoCross(int mid,vector<vector<int>>& cells){
       
       vector<vector<int>>mat(r,vector<int>(c));
       
       for(int i=0;i<=mid;i++){

           int row=cells[i][0]-1;
           int col=cells[i][1]-1;
           mat[row][col]=1;
       }
       for(int i=0;i<c;i++){
           if(mat[0][i]==0 && dfs(0,i,mat)) return true;

       }

    return false;       

    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        
        r=row;
        c=col;
        
        int n=cells.size();
        int left=0,right=n-1;

        int lastDay=0;

        while(left<=right){
            int mid=(left+right)/2;

            if(isPosstoCross(mid,cells)){
                lastDay=mid+1;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return lastDay;
        
    }
};