#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    b.insert(b.begin() + n, a.begin(), a.end());
    for (int x : b) {
        cout << x << " ";
    }


    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
