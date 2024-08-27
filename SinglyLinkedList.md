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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << (*temp).val << " " ;
        temp = (*temp).next;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    (*head).next = a;
    (*a).next = b;

    print_linked_list(head);

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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << (*temp).val << " " ;
        temp = (*temp).next;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    (*head).next = a;
    (*a).next = b;

    insertNode(head, 100, 101);
    print_linked_list(head);

    return 0;
}
```


### Deleting node
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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " " ;
        temp = temp->next;
    }
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    (*head).next = a;
    (*a).next = b;

    deleteNode(head, 3);
    print_linked_list(head);

    return 0;
}
```

### Deleting tail
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
        cout << temp->val << " " ;
        temp = temp->next;
    }
    cout << endl;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    delete_at_tail(head);
    print_linked_list(head);

    return 0;
}
```


### Insert Node
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

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " " ;
        temp = temp->next;
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
    print_linked_list(head);

    return 0;
}
```















