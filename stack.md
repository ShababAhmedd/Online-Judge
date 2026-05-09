# Stack

## Using Array
```C++
#include<bits/stdc++.h>
using namespace std;

class myStack {
private:
    vector<int> v;

public:
    void push(int val) {    // O(1)
        v.push_back(val);
    }

    void pop() {            // O(1)
        v.pop_back();
    }

    int top() {             // O(1)
        return v.back();
    }

    int size() {            // O(1)
        return v.size();
    }

    bool empty() {          // O(1)
        if (v.size() == 0) return true;
        else return false;
    }
};

int main() {
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
```
