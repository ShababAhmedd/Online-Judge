# Singly Linked List

### Creating a node
```C++
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
};

int main() {
    Node a, b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;
    //cout << (*a.next).val << endl;
    cout << a.next->val << endl;

    return 0;
}
```


### Constructor of node
```C++
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

int main() {
    Node a(10);
    Node b(20);
    a.next = &b;

    cout << a.val << endl;
    //cout << (*a.next).val << endl;
    cout << a.next->val << endl;

    return 0;
}
```


### Dynamic Node
```C++
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

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    // (*head).next = a;
    head->next = a;

    // cout << (*head).val << endl;
    cout << head->val << endl;
    // cout << (*(*head).next).val << endl;
    cout << head->next->val << endl;

    return 0;
}
```


### Printing Singly Linked List
```C++
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

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}
```


### Inserting node 
```C++
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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_position(Node *&head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_position(head, 0, 101);
    print_linked_list(head);

    return 0;
}
```


### Deleting node
```C++

```
