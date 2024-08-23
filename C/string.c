#include<stdio.h>

int main(){

    char string1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("The statement is %s\n", string1);

	char string2[] = "hello";
	int str2_len = strlen(string2);
	printf("The length of string is %d\n", str2_len);


    return 0;
}
