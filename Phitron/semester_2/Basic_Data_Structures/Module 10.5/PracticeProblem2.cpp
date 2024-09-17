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

void reverse(Node *head, Node *tail) {
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j) {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

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

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertingTail(head, tail, val);
    }

    reverse(head, tail);
    printLinkedList(head);


    return 0;
}
