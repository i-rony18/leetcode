class Solution {
public:
    vector<int> par, sz;
    void make(int n)
    {
        par.resize(n);
        sz.resize(n);
        for(int i = 0; i < n; i++)
            par[i] = i, sz[i] = 1;
    }

    int find(int v)
    {
        if(v == par[v])
            return v;
        
        return par[v] = find(par[v]);
    }

    void Union(int a, int b)
    {
        a = find(a);
        b = find(b);

        if(a == b)
            return;
        
        if(sz[a] < sz[b])
            swap(a, b);
        
        sz[a] += sz[b];
        par[b] = a;
    }

    int n;
    int mst(vector<vector<int>> v)
    {
        make(n);
        sort(v.begin(), v.end());
        int wt = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(find(v[i][1]) == find(v[i][2]))
                continue;

            Union(v[i][1], v[i][2]);
            wt += v[i][0];
        }

        return wt;
    }

    int mst2(vector<vector<int>> &v, int a, int b, int wt)
    {
        make(n);
        Union(a, b);
        for(int i = 0; i < v.size(); i++)
        {
            if(find(v[i][1]) == find(v[i][2]))
                continue;

            Union(v[i][1], v[i][2]);
            wt += v[i][0];
        }

        return wt;
    }
    
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<int>> v;
        this->n = n;
        
        for(auto edge : edges)
            v.push_back({edge[2], edge[0], edge[1]});
        
        vector<vector<int>> x = v;
        sort(v.begin(), v.end());
        
        vector<vector<int>> temp;
        int m = edges.size();
        int minn = mst(v);

        vector<int> critical, pseudocritical;
        vector<int> vis(m, 0);

        for(int i = 0; i < m; i++)
        {
            vector<vector<int>> temp = x;
            temp[i][0] = 1e7;
            int wt = mst(temp);

            if(wt > minn)
            {
                vis[i] = 1;
                critical.push_back(i);
            }
        }

        for(int i = 0; i < m; i++)
        {
            if(vis[i])
                continue;

            int wt = mst2(v, x[i][1], x[i][2], x[i][0]);
            if(wt == minn)
                pseudocritical.push_back(i);
        }

        vector<vector<int>> ans;
        ans.push_back(critical);
        ans.push_back(pseudocritical);
        
        return ans;
    }
};