#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", &s);

    int a[n];

    for (int i=0; i<n; i++){
        a[i]=s[i]-'0';
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }

    printf("%d", sum);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
