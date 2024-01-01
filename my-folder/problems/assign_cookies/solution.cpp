class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = 0;
        for (auto x : s){
            pq.push(x);
        }
        sort(g.begin(), g.end());
        for (auto it : g)
        {
            while (pq.size() && pq.top() < it){
                pq.pop();
            }
            if (pq.size())
            {
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};