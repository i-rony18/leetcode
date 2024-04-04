class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;  
        int depth = 0;         
        for (char ch : s) {
            if (ch == '(') {
                st.push(ch);
            }
            else if (ch == ')') {
                depth =max(depth, static_cast<int>(st.size()));
                st.pop();
            }
        }
        return depth;
    }
};