#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;

    while (cin >> s) {
        int first = 0;
        int last = 0;
        int j = 3;
        for (int i = 0; i < 3; i++) {
            first += s[i];
            last += s[j];
            j++;
        }
        if (first == last) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

// https://codeforces.com/contest/1676/problem/A
