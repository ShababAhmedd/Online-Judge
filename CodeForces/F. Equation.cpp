#include<bits/stdc++.h>
using namespace std;


int main() {
    int x, n;
    cin >> x >> n;

    long long int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += pow(x, i);
    }
    cout << sum;
    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
