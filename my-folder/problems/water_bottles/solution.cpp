class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int remain=0;
        while(numBottles/numExchange != 0){
            ans+=numBottles/numExchange;
            numBottles= numBottles/numExchange + numBottles%numExchange;
            
        }
        return ans;
    }
};