#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	int a, b;

	printf("Enter the value of a:");
	scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

	int add = a+b;
	int sub = a-b;
	int mult = a*b;
	double div = (double)a/(double)b;  // doing explicit typecasting to get the full fractional value.

	printf("Add:%d\n", add);
	printf("Sub:%d\n", sub);
	printf("Mult:%d\n", mult);
	printf("Div:%lf\n", div);   // %lf is the format specifier of double.

	return 0;
}
/*
Unary Operation  |  Pre increment and Post increment operations.
i++
i+=1
i = i+1
++i
i*=1
etc
*/
