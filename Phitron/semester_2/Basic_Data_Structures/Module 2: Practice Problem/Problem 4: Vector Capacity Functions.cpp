#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "=== before resizing ===" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << "maximum size: " << v.max_size() << endl;

    //resizing
    v.resize(20, 0);
    cout << "=== after resizing ===" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    //clearing
    v.clear();
    cout << "=== after clearing ===" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    //checking if the vector is empty
    cout << "=== checking if the vector is empty ===" << endl;
    if (v.empty()) cout << "empty" << endl;
    else cout << "not empty" << endl;

    // resizing the vector back to original
    v.resize(10, 100);
    cout << "=== after resizing the vector back to original size and filling with values 100 ===" << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    for (int x : v) cout << x << " ";

    return 0;
}
