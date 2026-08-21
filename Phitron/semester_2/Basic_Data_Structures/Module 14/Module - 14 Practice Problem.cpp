#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<int> Queue1;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        Queue1.push(x);
    }

    queue<int> Queue2;
    int b;
    cin >> b;
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        Queue2.push(x);
    }

    queue<int> MergedQueue;
    while (!Queue1.empty()) {
        MergedQueue.push(Queue1.front());
        Queue1.pop();
    }
    while (!Queue2.empty()) {
        MergedQueue.push(Queue2.front());
        Queue2.pop();
    }

    while (!MergedQueue.empty()) {
        cout << MergedQueue.front() << endl;
        MergedQueue.pop();
    }

    return 0;
}
