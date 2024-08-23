#include<stdio.h>

int main(){
	
	char string[30]; // size of the string we will be taking
	fgets(string, sizeof(string), stdin);
	
	printf("The given string is %s", string);
	
	return 0;
}


/*
"hello cse321 sec10"
if we use scanf to take input this very string, it will only be able to read till space. That means only "hello" will be taken as input discarding the rest of the words in the string.
So for taking string as input we use fgets()
*/
	
