#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] > 0) v[i] = 1;
        if (v[i] < 0) v[i] = 2;
    }

    for (int x : v) cout << x << " ";


    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
