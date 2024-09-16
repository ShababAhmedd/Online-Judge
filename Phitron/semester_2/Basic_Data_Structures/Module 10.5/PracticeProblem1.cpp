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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << (*temp).val << " ";
        temp = (*temp).next;
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

void equalChecker(Node *head1, Node *head2) {
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = false;
    while (temp1 != NULL) {
        if (temp1->val != temp2->val) {
            flag = true;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (flag == true) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertingTail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertingTail(head2, tail2, val);
    }

    //print_linked_list(head);
    //reversePrint(tail);

    if (size(head1) != size(head2)) {
        cout << "NO" << endl;
    }
    else equalChecker(head1, head2);

    return 0;
}
