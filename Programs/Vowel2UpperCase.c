*Problem Statement* - Program to convert the vowels to an uppercase in a given string using command line arguments.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	char *str = argv[1];

	if(argc!=2) {
		printf("Invalid Usage");
	}
	for(i=0; str[i]!='\0'; i++) {
		if(str[i] == 'a' || str[i] == 'e' 
		|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			str[i] -= 32;
		}
	}
	printf("%s", str);
}
