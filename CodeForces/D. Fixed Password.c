#include <stdio.h>
 
int main(){
 
    int x;
 
    while(1){
        scanf("%d", &x);
        if (x == 1999){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong \n");
        }
    }
 
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
