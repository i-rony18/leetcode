class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd=0;
        int i=0;
        int j=0;
        while(j<2 && j<arr.size()){
          if(arr[j]%2!=0){
            odd++;
          }
          j++;
        }
        while(j<arr.size()){
          if(arr[j]%2!=0){
            odd++;
          }
          if(odd==3){
            return true;
          }
          if(arr[i]%2!=0){
            odd--;
          }
          i++;
          j++;
        }
        return false;
    }
};