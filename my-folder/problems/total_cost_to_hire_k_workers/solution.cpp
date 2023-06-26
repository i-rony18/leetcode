class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        int n=costs.size();
        int l=0,r=n-1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        while(l<=r && l<(c)){
            pq.push({costs[l],0});
            cout<<costs[l]<<" "<<"l"<<"  ";
            l++;
        }
        while(r>=l && pq.size()<2*c){
            pq.push({costs[r],1});
            cout<<costs[r]<<" "<<"r"<<"  ";
            r--;
        }
        long long ans=0;
        while(k>0 && !pq.empty()){
            pair<int,int>f=pq.top();
            pq.pop();
            ans+=f.first;
            if(f.second==0 && l<=r){
                pq.push({costs[l],0});
                l++;
            }
            else if(f.second==1 && r>=l){
                pq.push({costs[r],1});
                r--;
            }
            k--;
        }
        return ans;
    }
};