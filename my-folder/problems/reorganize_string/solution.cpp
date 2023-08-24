class Solution {
public:
    string reorganizeString(string s) {
        
        int n = s.size();
        if(n==1) return s; 
        string ans = "";
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) mp[s[i]]++; 
        priority_queue< pair<int,char> > pq;
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        while(pq.size()>1){ 
            char c = pq.top().second;
            int cnt = pq.top().first;
            pq.pop();
            ans = ans + c; 
            char ch = pq.top().second;
            int count = pq.top().first;
            pq.pop();
            ans = ans + ch;  
            if(cnt!=1) pq.push({--cnt,c});  
            if(count!=1) pq.push({--count,ch});
        }
        if(pq.size()>1 || pq.top().first>1){ 
            return ""; 
        }
        else if(pq.size()==1){
            ans = ans + pq.top().second; 
            pq.pop();
        }
        return ans;
    }
};