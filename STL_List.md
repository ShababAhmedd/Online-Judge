# List Built-in Functions

## Constructor

| Name                                | Details                                                              | Time Complexity |
| ----------------------------------- | -------------------------------------------------------------------- | --------------- |
| `list<type> myList;`                | Construct a list with 0 elements.                                    | O(1)            |
| `list<type> myList(N);`             | Construct a list with N elements and the value will be garbage.      | O(N)            |
| `list<type> myList(N, V);`          | Construct a list with N elements and the value will be V.            | O(N)            |
| `list<type> myList(list2);`         | Construct a list by copying another list `list2`.                    | O(N)            |
| `list<type> myList(A, A+N);`        | Construct a list by copying all elements from an array `A` of size N.| O(N)            |

## Capacity

| Name              | Details                                                              | Time Complexity |
| ----------------- | -------------------------------------------------------------------- | --------------- |
| `myList.size()`   | Returns the size of the list.                                        | O(1)            |
| `myList.max_size()` | Returns the maximum size that the vector can hold.                 | O(1)            |
| `myList.clear()`  | Clears the list elements. Do not delete the memory, only clear the list. | O(N)        |
| `myList.empty()`  | Returns true/false if the list is empty or not.                      | O(1)            |
| `myList.resize()` | Changes the size of the list.                                        | O(K); where K is the difference between new size and current size. |

## Modifiers

| Name                                                            | Details                                                | Time Complexity                        |
| --------------------------------------------------------------- | ------------------------------------------------------ | -------------------------------------- |
| `myList=` or `myList.assign(list2.begin(), list2.end())`        | Assigns another list.                                  | O(N)                                   |
| `myList.push_back()`                                            | Adds an element to the tail.                           | O(1)                                   |
| `myList.push_front()`                                           | Adds an element to the head.                           | O(1)                                   |
| `myList.pop_back()`                                             | Deletes the tail.                                      | O(1)                                   |
| `myList.pop_front()`                                            | Deletes the head.                                      | O(1)                                   |
| `myList.insert()`                                               | Inserts elements at a specific position.               | O(N+K); where K is the number of elements to be inserted. |
| `myList.erase()`                                                | Deletes elements from a specific position.             | O(N+K); where K is the number of elements to be deleted. |
| `replace(myList.begin(), myList.end(), value, replace_value)`   | Replaces all the value with `replace_value`. Not under a list STL. | O(N) |
| `find(myList.begin(), myList.end(), V)`                         | Finds the value `V`. Not under a list STL.             | O(N)                                   |

## Operations

| Name                            | Details                                                | Time Complexity |
| --------------------------------| ------------------------------------------------------ | --------------- |
| `myList.remove(V)`              | Removes the value `V` from the list.                   | O(N)            |
| `myList.sort()`                 | Sorts the list in ascending order.                     | O(N log N)      |
| `myList.sort(greater<type>())`  | Sorts the list in descending order.                    | O(N log N)      |
| `myList.unique()`               | Deletes the duplicate values from the list. You must sort the list first. | O(N), with sort O(N log N) |
| `myList.reverse()`              | Reverses the list.                                     | O(N)            |

## Element Access

| Name                           | Details                                  | Time Complexity |
| ------------------------------ | ---------------------------------------- | --------------- |
| `myList.back()`                | Accesses the tail element.               | O(1)            |
| `myList.front()`               | Accesses the head element.               | O(1)            |
| `next(myList.begin(), i)`      | Accesses the ith element.                | O(N)            |

## Iterators

| Name                 | Details                                    | Time Complexity |
| -------------------- | ------------------------------------------ | --------------- |
| `myList.begin()`     | Pointer to the first element.              | O(1)            |
| `myList.end()`       | Pointer to the last element.               | O(1)            |


<br></br>
# Code templates
## Constructor
### Initializing
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    // list<int> mylist;
    list<int> mylist(10, 5);
    cout << mylist.size() << endl;
    cout << mylist.front() << endl;

    return 0;
}
```
<br></br>
### Iterating
###### using pointer
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    // list<int> mylist;
    list<int> mylist(10, 5);
    for (auto it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
```
###### using range based for loop
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

<br></br>
### Copying
###### from another list
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 5};
    list<int> mylist(l);    // O(n)

    for (auto it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
```

###### from an array
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    list<int> mylist(arr, arr + len);

    for (auto it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
```

###### from a vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> mylist(v.begin(), v.end());

    for (auto it = mylist.begin(); it != mylist.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
```

<br></br>
## Capacity
### maximum size of a list
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    cout << mylist.max_size();

    return 0;
}
```

### Clearing the list
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.clear();
    cout << mylist.size() << endl;
    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

<br></br>
### Resizing
###### Increasing size
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.resize(2);
    cout << mylist.size() << endl;
    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### Decreasing size
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.resize(10);
    cout << mylist.size() << endl;
    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### Increasing size with desired value
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.resize(10, 100);
    cout << mylist.size() << endl;
    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```
<br></br>

## Modifiers
### Assigning another list
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    list<int> newList;
    // newList.assign(mylist.begin(), mylist.end());    // O(n)
    newList = mylist;    // O(n)

    for (int val : newList) {
        cout << val << " ";
    }

    return 0;
}
```
### Adding
###### tail
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.push_back(100);    // O(1)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### head
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.push_front(100);    // O(1)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

<br></br>
### Deleting 
###### tail
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.pop_back();    // O(1)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### head
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.pop_front();    // O(1)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

<br></br>
### Erasing
###### single element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.erase(next(mylist.begin(), 3));  // O(n)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```
###### Multiple elements
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    mylist.erase(next(mylist.begin(), 1), next(mylist.begin(), 4)); // O(n+k)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```


<br></br>
### Inserting 
###### elements
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    // mylist.insert(next(mylist.begin(), 2), 100);    // O(n)
    mylist.insert(next(mylist.begin(), 2), (100, 200, 300));  // O(n+k)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### list
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    list<int> l = {100, 200, 300};
    mylist.insert(next(mylist.begin(), 2), l.begin(), l.end());  // O(n+k)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### Vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    vector<int> v = {100, 200, 300};
    mylist.insert(next(mylist.begin(), 2), v.begin(), v.end());  // O(n+k)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

###### Array
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    int arr[] = {100, 200, 300};
    int len = sizeof(arr) / sizeof(arr[0]);
    mylist.insert(next(mylist.begin(), 2), arr, arr + len); // O(n+k)

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```

<br></br>
### Replacing element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> mylist = {1, 2, 3, 4, 5};
    replace(mylist.begin(), mylist.end(), 1, 100);

    for (int val : mylist) {
        cout << val << " ";
    }

    return 0;
}
```
