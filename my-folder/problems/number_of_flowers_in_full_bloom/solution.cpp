class Solution {
public:
vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for (auto &it: flowers){
        a.push_back(it[0]);
        b.push_back(it[1]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (auto &it :people){
        int s = lower_bound(a.begin(),a.end(),it+1) - a.begin();
        int e = lower_bound(b.begin(),b.end(),it) - b.begin();
        c.push_back(s-e);
    }
    return c;
}
};