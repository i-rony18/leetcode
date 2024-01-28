class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            vector<int> sumRow(n, 0);

            for(int j = i; j < m; j++) {
                for(int k = 0; k < n; k++) {
                    sumRow[k] += matrix[j][k];
                }
                count += subArraySum(sumRow, target);
            }
        }
        return count;
    }

private:
    int subArraySum(vector<int>& arr, int k) {
        int sum = 0;
        int count = 0;
        unordered_map<int, int> map;
        map[0] = 1;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            int rem = sum - k;
            
            if(map.find(rem) != map.end()) {
                count += map[rem];
            }
            map[sum] = map.find(sum) != map.end() ? map[sum] + 1 : 1;
        }
        return count;
    }
};