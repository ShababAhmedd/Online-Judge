#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char x : s) {
        freq[x - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        if (freq[i - 'a'] != 0) {
            cout << i << " " << ":" << " " << freq[i - 'a'] << endl;
        }
    }

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
