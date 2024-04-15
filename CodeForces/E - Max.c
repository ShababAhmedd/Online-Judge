#include <stdio.h>
#include <limits.h>

int main(){

    int n, i, max, j;
    max = INT_MIN;
    i = 0;
    scanf("%d", &n);
    while(i<n){
        scanf("%d", &j);
        if (j>max){
            max = j;
        }
        i++;
    }

    printf("%d", max);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
