class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto x: nums){
            pq.push(x);
        }
        int n = pq.top();
        pq.pop();
        int m = pq.top();

        return ((n-1)*(m-1));  
    }
};