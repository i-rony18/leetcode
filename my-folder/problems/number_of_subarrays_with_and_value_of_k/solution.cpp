class Solution {
public:
    long long countSubarrays(vector<int>& array, int target) {
        int n = array.size();
        long long total = 0;
        unordered_map<long long, long long> prev;
        for (int index = 0; index < n; ++index) {
            unordered_map<long long, long long> currentRes; 
            if (array[index] == target) {
                ++total;
            }
            currentRes[array[index]] = 1;
            for (auto& [value, frequency] : prev) {
                long long newAndRes = value & array[index];
                if (newAndRes == target) {
                    total += frequency;
                }
                currentRes[newAndRes] += frequency;
            }
            prev = currentRes;
        }
        return total;
    }
};