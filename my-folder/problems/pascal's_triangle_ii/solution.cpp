class Solution {
public:
    vector<int> row(int rowIndex,int currRow,vector<int>pascal)
    {
        if(rowIndex+1==currRow) return pascal;
        if(currRow==0) return row(rowIndex,currRow+1,{1});
        if(currRow==1) return row(rowIndex,currRow+1,{1,1});
        vector<int>tmp;
        tmp.push_back(1);
        for(int i = 0;i<pascal.size()-1; i++)
            tmp.push_back(pascal[i]+pascal[i+1]);
        tmp.push_back(1);
        return row(rowIndex,currRow+1,tmp);
    }
    vector<int> getRow(int rowIndex) {
      return row(rowIndex,0,{});
    }
};