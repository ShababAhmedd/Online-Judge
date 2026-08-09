class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {    // O(1)
        q.push(x);
    }
    
    int pop() {    // O(n)
        queue<int> newQ;
        int last_element;
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            if (q.empty()) {
                last_element = k;
                break;
            }
            newQ.push(k);
        }
        while (!newQ.empty()) {   
            q.push(newQ.front());
            newQ.pop();
        }
        return last_element;
    }
    
    int top() {    // O(n)
        queue<int> newQ;
        int last_element;
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            if (q.empty()) {
                last_element = k;
                // break;
            }
            newQ.push(k);
        }
        while (!newQ.empty()) {   
            q.push(newQ.front());
            newQ.pop();
        }
        return last_element;
    }
    
    bool empty() {    // O(1)
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


// https://leetcode.com/problems/implement-stack-using-queues/description/
