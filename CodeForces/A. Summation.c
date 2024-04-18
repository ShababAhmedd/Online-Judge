#include <stdio.h>

int main(){

    int n, i, j;
    long long int sum;

    scanf("%d", &n);
    int arr[n];

    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sum = 0;
    for (j=0; j<n; j++){
        sum += arr[j];
    }

    if (sum < 0){
        printf("%lld", sum*-1);
    }
    else{
        printf("%lld", sum);
    }
    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
