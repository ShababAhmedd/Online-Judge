#include<bits/stdc++.h>
using namespace std;

void ReplaceWord(string s) {
    string subString;
    subString = "EGYPT";
    while (s.find(subString) != -1) {
        s.replace(s.find(subString), subString.size(), " ");
    }
    cout << s << endl;
}

int main() {
    string s;
    getline(cin, s);
    ReplaceWord(s);

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
