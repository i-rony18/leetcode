class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        int n=intervals.size();
        vector<vector<int>> ans;
        int i=0;

        while(i<n){
            if(newinterval[0]>intervals[i][1])
            ans.push_back(intervals[i]);
            else if(newinterval[1]<intervals[i][0])
            break;
            else {
                newinterval[0]=min(newinterval[0],intervals[i][0]);
                newinterval[1]=max(newinterval[1],intervals[i][1]);
            }
            i++;
        }
        ans.push_back(newinterval);

        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
        
    }
};