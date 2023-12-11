class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int a=arr.size();

        unordered_map<int,int>freq;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]=freq[arr[i]]+1;
            if(freq[arr[i]]>(a/4)){
                return arr[i];
            }
        }
        return -1;
        
    }
};