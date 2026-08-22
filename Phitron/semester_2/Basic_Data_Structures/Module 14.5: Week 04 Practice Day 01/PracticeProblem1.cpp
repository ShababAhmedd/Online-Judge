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
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

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
    myStack st1;
    myStack st2;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        st1.push(x);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        st2.push(x);
    }

    bool flag = true;
    if (st1.size() != st2.size()) {
        flag = false;
    } else {
        Node* temp1 = st1.head;
        Node* temp2 = st2.head;

        while (temp1 != NULL) {
            if (temp1->val != temp2->val) {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    if (flag == false) cout << "NO" << endl;
    else cout << "YES" << endl;


    return 0;
}
