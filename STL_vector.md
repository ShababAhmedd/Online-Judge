
# Vector Built-in Functions

### Constructor

| Name                      | Details                                                          | Time Complexity |
|---------------------------|------------------------------------------------------------------|-----------------|
| `vector<type>v;`          | Construct a vector with 0 elements.                              | O(1)            |
| `vector<type>v(N);`       | Construct a vector with N elements and the value will be garbage.| O(N)            |
| `vector<type>v(N,V);`     | Construct a vector with N elements and the value will be V.      | O(N)            |
| `vector<type>v(v2);`      | Construct a vector by copying another vector v2.                 | O(N)            |
| `vector<type>v(A,A+N);`   | Construct a vector by copying all elements from an array A of size N. | O(N)        |

### Capacity

| Name             | Details                                                         | Time Complexity |
|------------------|-----------------------------------------------------------------|-----------------|
| `v.size()`       | Returns the size of the vector.                                 | O(1)            |
| `v.max_size()`   | Returns the maximum size that the vector can hold.              | O(1)            |
| `v.capacity()`   | Returns the current available capacity of the vector.           | O(1)            |
| `v.clear()`      | Clears the vector elements. Do not delete the memory, only clear the value. | O(N)    |
| `v.empty()`      | Return true/false if the vector is empty or not.                | O(1)            |
| `v.resize()`     | Change the size of the vector.                                  | O(K); where K is the difference between new size and current size. |

### Modifiers

| Name                      | Details                                                      | Time Complexity                        |
|---------------------------|--------------------------------------------------------------|----------------------------------------|
| `v=` or `v.assign()`      | Assign another vector.                                       | O(N) if sizes are different, O(1) otherwise. |
| `v.push_back()`           | Add an element to the end.                                   | O(1)                                  |
| `v.pop_back()`            | Remove the last element.                                     | O(1)                                  |
| `v.insert()`              | Insert elements at a specific position.                      | O(N+K); where K is the number of elements to be inserted. |
| `v.erase()`               | Delete elements from a specific position.                    | O(N+K); where K is the number of elements to be deleted. |
| `replace(v.begin(),v.end(),value,replace_value)` | Replace all the value with replace_value. Not under a vector. | O(N) |
| `find(v.begin(),v.end(),V)` | Find the value V. Not under a vector.                     | O(N)                                  |

### Element Access

| Name             | Details                              | Time Complexity |
|------------------|--------------------------------------|-----------------|
| `v[i]`           | Access the ith element.              | O(1)            |
| `v.at(i)`        | Access the ith element.              | O(1)            |
| `v.back()`       | Access the last element.             | O(1)            |
| `v.front()`      | Access the first element.            | O(1)            |

### Iterators

| Name             | Details                              | Time Complexity |
|------------------|--------------------------------------|-----------------|
| `v.begin()`      | Pointer to the first element.        | O(1)            |
| `v.end()`        | Pointer to the last element.         | O(1)            |



### Constructing a vector with N elements and V values
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5, 0);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
```


### Constructing a vector by copying another vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1(5, 100);
    vector<int> v2(v1);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }


    return 0;
}
```


### Constructing a vector by copying an array
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + len);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }


    return 0;
}
```


### Initializing a vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


    return 0;
}
```


### Adding an element to the end of the vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;

    return 0;
}
```


### Changing the size of the vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    v.resize(2);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
```


### Clearing the size of the vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.clear();
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << "===================" << endl;
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {   
        cout << v[i] << endl;
    }

    return 0;
}
```


### Assigning another vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x = {10, 20, 30};
    vector<int> y = {1, 2, 3};
    x = y;

    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }

    return 0;
}
```


### Removing the rightmost element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    v.pop_back();

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
```



### Inserting element 
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 2, 10);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```


### Inserting a vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {101, 102, 103};
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```


### Deleting element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    //v.erase(v.begin() + 1);
    //v.erase(v.begin() + 1, v.begin() + 4);
    v.erase(v.begin() + 1, v.end() - 1);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```


### Replacing element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 4, 2, 5, 2};
    replace(v.begin(), v.end(), 2, 100);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```


### Replacing element upto certain index
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 4, 2, 5, 2};
    replace(v.begin(), v.end() - 1, 2, 100);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```


### Finding an element
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    //vector<int> :: iterator it;
    //it = find(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 3);

    cout << *it << endl;
    if (it == v.end()) cout << "not found";
    else cout << "found";

    return 0;
}
```


### Element access
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    //cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;

    //cout << v[0] << endl;
    cout << v.front() << endl;

    return 0;
}
```


### Iterators
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    //vector<int> :: iterator it;
    
    //for (it = v.begin(); it < v.end(); it++) {
    for (auto it = v.begin(); it < v.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
```


### Taking input in vector
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
```
