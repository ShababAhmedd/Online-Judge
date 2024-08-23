#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 1; i <= n; i++) {
        v[i - 1] = i;
    }

    for (int x : v) cout << x << " ";

    return 0;
}
