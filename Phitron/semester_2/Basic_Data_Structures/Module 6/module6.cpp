#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void sizeCount(Node *head) {
    int sum = 0;
    Node *temp = head;
    while (temp != NULL) {
        temp = temp->next;
        sum++;
    }
    cout << sum << endl;
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void insertNode(Node *&head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (pos == 0) {
        (*newNode).next = head;
        head = newNode;
    }
    else {
        for (int i = 0; i < pos - 1; i++) {
            temp = (*temp).next;
            if (temp == NULL) {
                cout << "Invalid index given" << endl;
                return;
            }
        }
        (*newNode).next = (*temp).next;
        (*temp).next = newNode;
    }
}

void deleteNode(Node *&head, int pos) {
    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
            if (temp == NULL) {
                cout << "Invalid Index given" << endl;
                return;
            }
        }
        if (temp->next == NULL) {
            cout << "Invalid Index" << endl;
            return;
        }
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
}

void delete_at_tail(Node *&head) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

int main() {
    Node *head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, val);
    }
    sizeCount(head);
    print_linked_list(head);
    cout << "==============" << endl;
    insertNode(head, 0, 101);
    insert_at_tail(head, 301);
    insertNode(head, 5, 201);
    print_linked_list(head);
    cout << "==============" << endl;
    deleteNode(head, 0);
    delete_at_tail(head);
    deleteNode(head, 4);
    print_linked_list(head);

    return 0;
}
