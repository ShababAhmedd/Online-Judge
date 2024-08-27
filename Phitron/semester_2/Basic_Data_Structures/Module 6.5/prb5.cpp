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

void isSorted(Node *head) {
    Node *temp = head;
    bool flag = false;
    while (temp->next != NULL) {
        if (temp->val > temp->next->val) {
            cout << "NO";
            return;
        }
        temp = temp->next;
    }
    cout << "YES" << endl;
}

int main() {
    Node *head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        linkedListBuilder(head, val);
    }
    isSorted(head);

    return 0;
}
