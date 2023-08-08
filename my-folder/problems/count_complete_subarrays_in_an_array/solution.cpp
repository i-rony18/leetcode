class Solution {
public:
    int countCompleteSubarrays(vector<int>& a) {
        int n=a.size();
        int ans=0;
        unordered_set<int>s(a.begin(),a.end());
        int k=s.size();
        for(int i=0;i<n;i++){
            unordered_set<int> s1;
            for (int j = i; j < n; j++) {
                s1.insert(a[j]);
                if (s1.size() == k) {
                    ans++;
                }
            }
        }
        return ans;
    }
};