class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int ans = n; 
        int i = 0;
        while(i < n){
            int j = i - 1;
            int count = 0;
            while(j >= 0 && ratings[j + 1] > ratings[j]){
                count++;
                j--;
            }
            int count2 = 0;
            j = i+1;
            while(j < n && ratings[j - 1] > ratings[j]){
                count2++, j++;
            }
            ans += max(count, count2);
            i++;
        }
        return ans;
    }
};