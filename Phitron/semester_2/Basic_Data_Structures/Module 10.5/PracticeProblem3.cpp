#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    Node *prev;
    int val;
    Node *next;
    Node(int val) {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};



void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertingTail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    (*tail).next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void palindromeChecker(Node *head, Node *tail) {
    Node *i = head;
    Node *j = tail;
    bool flag = false;
    while (i != j && i->next != j) {
        if (i->val != j->val) {
            flag = true;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val) {
        flag = true;
    }
    if (flag == true) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertingTail(head, tail, val);
    }

    //printLinkedList(head);
    palindromeChecker(head, tail);


    return 0;
}
