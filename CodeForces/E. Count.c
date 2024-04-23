#include<stdio.h>
#include<string.h>
 
int main(){
    char s[1000001];
    scanf("%s", s);
 
    int i=0, sum=0;
    while(i<strlen(s)){
        sum += (s[i]-'0');
        i++;
    }
 
    printf("%d", sum);
 
    return 0;
}
