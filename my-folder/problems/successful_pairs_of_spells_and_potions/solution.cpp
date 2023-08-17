class Solution {
public:
    int getSuccess(int spell , vector<int>& potions , long long success){
        int n = potions.size();
        int lo = 0 , hi = n -  1;
        int successfull_Pairs = 0;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            long long product = (long long)spell * (long long)potions[mid];
            if(product >= success){
                successfull_Pairs = n - mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return successfull_Pairs;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n = spells.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int pairs = getSuccess(spells[i],potions,success);
            result.push_back(pairs);
        }
        return result;
    }
};