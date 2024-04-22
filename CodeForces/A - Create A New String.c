#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    char t[1001];

    scanf("%s", s);
    scanf("%s", t);

    int s_size = strlen(s);
    int t_size = strlen(t);

    printf("%d %d\n", s_size, t_size);
    printf("%s %s", s, t);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
