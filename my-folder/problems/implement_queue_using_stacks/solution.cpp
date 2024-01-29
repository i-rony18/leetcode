class MyQueue {
    stack<int> st;
    void getStack(stack<int> &s, int x){
        if(s.empty()){
            s.push(x);
            return;
        }
        int temp=s.top();
        s.pop();
        getStack(s,x);
        s.push(temp);
    }
public:
    void push(int x) {
        getStack(st,x);
    }
    
    int pop() {
        int ans=st.top();
        st.pop();
        return ans;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */