class Solution {
public:
   bool dfs(vector<vector<int>>& graph,int node,vector<int>&vis,unordered_set<int>&st){
       if(st.find(node)!=st.end())return true;
       if(vis[node])return false;
       vis[node]=1;
       bool ans=true;
       for(auto&it:graph[node]){
        bool t=dfs(graph,it,vis,st);
        if(!t)ans=false;
       }
       if(ans) st.insert(node);
          
       return ans;
   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_set<int>st;
        vector<int>vis(graph.size(),0);
        vector<int>res;
        for(int i=0;i<graph.size();i++){
            if(dfs(graph,i,vis,st)){
                res.push_back(i);
            }
        }
        
        return res;
    }
};