class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num>0) {
            sum += (num % 10);
            num /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
       map<int,priority_queue<int>> hashmap;
       int ans = -1;
       for (auto &num:nums) hashmap[digitSum(num)].push(num);
       for (auto &val:hashmap) {
           if (val.second.size() > 1) {
               int fir = val.second.top();
               val.second.pop();
               int sec = val.second.top();
               ans = max(ans, fir+sec);
           }
       }
       return ans; 
    }
};