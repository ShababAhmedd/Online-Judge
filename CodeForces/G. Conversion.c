#include<stdio.h>
#include<string.h>

int main(){
    char s[100001];
    fgets(s, sizeof(s), stdin);

    int i=0;
    while(s[i] != '\n' && s[i] != '\0'){
        if (s[i]>='a' && s[i]<='z'){
            char p = s[i]-' ';
            printf("%c", p);
        }
        else if (s[i]>='A' && s[i]<="Z"){
            char p = ' '+s[i];
            printf("%c", p);
        }
        else if (s[i] == ','){
            char space = ' ';
            printf("%c", space);
        }
        i++;
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
