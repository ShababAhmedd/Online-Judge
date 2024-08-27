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

void linkedListBuilder(Node *&head, int val) {
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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << (*temp).val << " " ;
        temp = (*temp).next;
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
                cout << "Invalid" << endl;
                return;
            }
        }
        (*newNode).next = (*temp).next;
        (*temp).next = newNode;
    }
    print_linked_list(head);
}

int main() {
    Node *head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        linkedListBuilder(head, val);
    }
    int index, value;
    while (cin >> index >> value) {
        insertNode(head, index, value);
    }

    return 0;
}
