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

## Using Doubly Linked List
### STL Library
```C++
#include<bits/stdc++.h>
using namespace std;

class myStack {
private:
    list<int> l;

public:
    void push(int val) {    // O(1)
        l.push_back(val);
    }

    void pop() {            // O(1)
        l.pop_back();
    }

    int top() {             // O(1)
        return l.back();
    }

    int size() {            // O(1)
        return l.size();
    }

    bool empty() {          // O(1)
        if (l.size() == 0) return true;
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

### By manually implementing doubly linked list
```C++
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
private:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

public:
    void push(int val) {    // O(1)
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop() {            // O(1)
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL) {
            head = NULL;
        } else {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top() {             // O(1)
        return tail->val;
    }

    int size() {            // O(1)
        return sz;
    }

    bool empty() {          // O(1)
        if (sz == 0) return true;
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
