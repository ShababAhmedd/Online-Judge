#include<bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int len = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array + len);

    for (int x : v) cout << x << " ";

    return 0;
}
