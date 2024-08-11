#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    bool inside_word = false;
    int cnt = 0;
    for (char c : s) {
        if (isalpha(c)) {
            if (inside_word == false) {
                cnt++;
            }
            inside_word = true;
        }
        else inside_word = false;
    }
    cout << cnt;

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

/*
isalpha('small letter') = 1
isalpha('capital letter') = 2
isalpha('anything other than char') = 0
*/
