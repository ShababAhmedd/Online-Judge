#include <stdio.h>

int main(){

	int num1 = 54;
	printf("%d is the integer number\n", num1); // %d is the format specifier


	float num2 = 54.321;
	float num3 = 22.51;
	float num4 = num2*num3;
	printf("%f is the floating number\n", num4); // %f is the format specifier
    	printf("%0.2f is the floating number but upto two decimal place\n", num4);    // This 0.2 between the format specifier of float dictates how many decimal places we want to take for this floating value.

	float num5;
	float num6;
	printf("Enter two floating values\n");
	scanf("%f %f", &num5, &num6);  // & referes to the location of the memory variable.
	float num7 = num5*num6;
	printf("%f is the product result of the input", num7);

	return 0;
}
