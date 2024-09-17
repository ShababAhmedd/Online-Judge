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

void reversePrint(Node *tail) {
    Node *temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertNode(Node *head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void insertHead(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertTail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail =  newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0) {
            insertHead(head, tail, val);
            printLinkedList(head);
            reversePrint(tail);
        }
        else if (pos > size(head)) {
            cout << "Invalid" << endl;
        }
        else if (pos == size(head)) {
            insertTail(head, tail, val);
            printLinkedList(head);
            reversePrint(tail);
        }
        else {
            insertNode(head, pos, val);
            printLinkedList(head);
            reversePrint(tail);
        }
    }


    return 0;
}
