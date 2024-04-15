#include <stdio.h>

int main(){

    int a, b, sub;
    scanf("%d %d", &a, &b);

    sub = a-b;
    if (sub>=0){
        printf("%d", sub);
    }
    else{
        printf("0");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
