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

void insertNode(Node *&head, int val) {
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

void midValuePrinter(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    temp = head;
    if (count % 2 == 0) {
        for (int i = 0; i < count / 2 - 1; i++) {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
    else {
        for (int i = 0; i < count / 2; i++) {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
}

int main() {
    Node *head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertNode(head, val);
    }
    midValuePrinter(head);

    return 0;
}
