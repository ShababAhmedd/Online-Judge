#include <stdio.h>
int main(){
    int i, n, sum;
    sum = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if (i%2==0){
        printf("%d \n", i);
        sum++;
        }
    }
    if (sum==0){
        printf("-1");
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
