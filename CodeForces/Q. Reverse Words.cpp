#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    getline(cin, s);

    stringstream x;
    x << s;
    string word;
    bool first_word = true;

    while (x >> word) {
        int left = 0;
        int right = word.length() - 1;
        while (left < right) {
            char temp = word[left];
            word[left] = word[right];
            word[right] = temp;
            left++;
            right--;
        }

        if (first_word == false) {
            cout << " ";
        }
        first_word = false;
        cout << word;
    }

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
