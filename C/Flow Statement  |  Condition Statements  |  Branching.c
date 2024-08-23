#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

        int a, b;

        printf("Enter the values of a: ", a);
        scanf("%d", &a);

        printf("Enter the value of b: ", b);
        scanf("%d", &b);

        if(a>b){
            printf("a is GREATER than b\n");
        }
        else if(a<b){
            printf("a is LESS than b\n", a, b);
        }
        else{
            printf("a is EQUAL to b", a, b);
        }

	return 0;
}
