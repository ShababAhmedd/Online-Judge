#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int frq[26] = {0};
        for (char c : s) {
            frq[c - 'A']++;
        }

        int balloons = 0;
        for (int i = 0; i <= 25; i++) {
            if (frq[i] != 0) {
                frq[i]++;
                balloons += frq[i];
            }
            //cout << i << "-" << frq[i] << endl;
        }
        cout << balloons << endl;
    }


    return 0;
}

// https://codeforces.com/contest/1703/problem/B
