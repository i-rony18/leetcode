class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt=0;
        for(auto i: hours){
            if(i>=target){
                cnt++;
            }
        }
        return cnt;
    }
};