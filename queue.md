# Implementation using Singly Linked List
```C++
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        if (sz == 0) return true;
        else return false;
    }
};

int main() {
    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
```

# Implementation using Doubly Linked List
```C++
#include <bits/stdc++.h>
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

class myQueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop() {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }

    int front() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        if (sz == 0) return true;
        else return false;
    }

};

int main() {
    myQueue q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
```

# Implementation using STL List
```C++
#include <bits/stdc++.h>
using namespace std;

class myQueue {
public:
    list<int> l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_front();
    }

    int front() {
        return l.front();
    }

    int size() {
        return l.size();
    }

    bool empty() {
        return l.empty();
    }

};

int main() {
    myQueue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
```

# Implementation using STL queue
```C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}
```
