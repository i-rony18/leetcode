class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0) st.push(v[i]);
            else{
                while(!st.empty() and st.top()<abs(v[i])) st.pop();
                if(!st.empty() and st.top()==abs(v[i]))st.pop();
                else if(st.empty()) ans.push_back(v[i]); 
            }
        }
        int idx=ans.size();
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin()+idx,ans.end());
        return ans;
    }
};