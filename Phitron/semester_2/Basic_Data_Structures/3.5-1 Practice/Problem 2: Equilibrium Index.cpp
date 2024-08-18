#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //for (int x : arr) cout << x << " ";

    int idx = 0;
    for (int i = 1; i < n - 1; i++) {
        int lower_idx = 0, higher_idx = 0;

        // calculating sum of lower index
        for (int j = 0; j < i; j++) {
            lower_idx += arr[j];
        }

        // calculating sum of higher index
        for (int k = i + 1; k < n; k++) {
            higher_idx += arr[k];
        }
        // checking if equilibrium index is found
        if (lower_idx == higher_idx) {
            idx = i;
            cout << idx;
        }
    }


    return 0;
}
