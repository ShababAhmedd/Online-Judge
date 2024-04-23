#include<stdio.h>
#include<string.h>

int main(){
    char s[1000001];
    fgets(s, 1000001, stdin);

    int i = 0;
    while(s[i] != '\\'){
        printf("%c", s[i]);
        i++;
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
