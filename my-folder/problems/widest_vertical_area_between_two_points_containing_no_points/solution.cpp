class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        priority_queue<int> pq;
        for(auto& cord: points)
            pq.push(cord[0]);
        int mdiff=0, prev=pq.top();
        while(!pq.empty()){
            int curr=pq.top();
            pq.pop();
            mdiff=max(mdiff, prev-curr);
            prev=curr;
        }
        return mdiff;       
    }
};