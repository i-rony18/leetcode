class Solution {
public:
    int minimumCost(vector<int>& cost) {
    sort(begin(cost), end(cost));
        int result = 0;
        for (int i = size(cost)-2; i>0; --i) {
            cost[--i]=0; 
            i=i-1;    
        }
        for(int i=0;i<size(cost);i++){
        result+=cost[i];
        }
        return result;
    }
};