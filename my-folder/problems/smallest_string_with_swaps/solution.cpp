using ll = long long;
class DSU{
    public:
    vector<int> rank;
    vector<int> parent;
    int n;
    DSU(int n){
        this->n=n;
        rank=vector<int>(n,1);
        parent=vector<int>(n,0);
        iota(parent.begin(),parent.end(),0);
        
    }
    ll find(ll a){
        if(parent[a]==a) return a;
        else return parent[a]=find(parent[a]);
    }
    void unionF(ll a , ll b ){
        ll pa = find(a);
        ll pb = find(b);
        if(pa==pb) return ;
        if(rank[pa]>rank[pb]){
            swap(pa,pb);
        }
        parent[pa]=pb;
        if (rank[pa] == rank[pb])
            rank[pb]++;
    }
       

};
class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
       DSU ds(s.size());
       for(auto it:pairs){
           ds.unionF(it[0],it[1]);
       }
       map<int,multiset<char>> mp;
       for(int i=0;i<s.size();i++){
           mp[ds.find(i)].insert(s[i]);
       }
       for(int i=0;i<s.size();i++){
           auto it=mp[ds.find(i)].begin();
           s[i]=*it;
            // cout<<*it<<"  ";
           mp[ds.find(i)].erase(it);
           
       }
       return s;

    }
};