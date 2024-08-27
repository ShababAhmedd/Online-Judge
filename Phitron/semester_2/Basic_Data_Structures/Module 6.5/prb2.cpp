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

void dublicateFinder(Node *head) {
    int fre[100] = {0};
    Node *temp = head;
    while (temp != NULL) {
        fre[temp->val]++;
        temp = temp->next;
    }
    bool flag = false;
    for (int i = 0; i < 100; i++) {
        if (fre[i] > 1) {
            flag = true;
            break;
        }
    }
    if (flag == true) cout << "YES";
    else cout << "NO";
}

int main() {
    Node *head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insertNode(head, val);
    }
    dublicateFinder(head);

    return 0;
}
