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

    int q;
    cin >> q;

    sort(arr.begin(), arr.end());

    while (q--) {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r) {
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
        if (flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}
