class MinStack {
public:
    stack<int> st, minSt;
    MinStack() {
        
    }
    
    void push(int value) {
        
        if (st.empty()) {
            st.push(value);
            minSt.push(value);
            return;
        }

        st.push(value);
        minSt.push(min(value, minSt.top()));
    }
    
    void pop() {
        if (st.empty()) return;
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


// https://leetcode.com/problems/min-stack/
