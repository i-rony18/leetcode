class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size(), count = 0;
        for (int i = 0; i < n; i++) {
            int a = arr[i];
            for (int j = i + 1; j < n; j++) {
                int b = 0;
                for (int k = j; k < n; k++) {
                    b = b ^ arr[k];
                    if (a == b) {
                        count++;
                    }
                }
                a = a ^ arr[j];
            }
        }

        return count;
    }
};