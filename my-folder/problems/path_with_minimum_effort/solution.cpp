class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int n=heights.size();
        int m=heights[0].size();
        vector<int> newx={-1,0,1,0};
        vector<int> newy={0,1,0,-1};
        vector<vector<int>> distance(n,vector<int> (m,INT_MAX));
        distance[0][0]=0;
        while(!pq.empty())
        {
            int cost=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            for(int i=0;i<4;i++)
            {
                int new_x=x+newx[i];
                int new_y=y+newy[i];
                if(new_x>=0 and new_x<n and new_y>=0 and new_y<m)
                {
                    int effort=max(cost,abs(heights[x][y]-heights[new_x][new_y]));
                    if(distance[new_x][new_y]>effort)
                    {
                        distance[new_x][new_y]=effort;
                        pq.push({distance[new_x][new_y],{new_x,new_y}});
                    }
                }
            }
        }
        return distance[n-1][m-1];
    }
};