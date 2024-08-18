#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) {   // O(n)
        cin >> arr[i];
    }

    sort(arr, arr + n);     // O(nlogn)

    while (q--) {   // O(q)
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r) {    // O(logn)
            int mid = (l + r) / 2;
            if (arr[mid] == x) {
                flag = true;
                break;
            }
            if (x > arr[mid]) {
                l = mid + 1;
            }
            if (x < arr[mid]) {
                r = mid - 1;
            }
        }
        if (flag == true) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
