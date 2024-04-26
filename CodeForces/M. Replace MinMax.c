#include <stdio.h>
#include <string.h>
#include<limits.h>

int main() {

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int min_idx=0;
    int max_idx=0;
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
            min_idx=i;
        }
        if(a[i]>max){
            max=a[i];
            max_idx=i;
        }
    }

    a[min_idx]=max;
    a[max_idx]=min;
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
