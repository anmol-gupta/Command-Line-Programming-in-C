*Problem Statement* - Program to check whether the given number is Palindrome  or not using command line arguments.

#include<stdio.h>
#include<stdlib.h>

 int main(int argc, char *argv[]) {
 	int num, temp, revNum = 0, rem;

	if(argc!=2) {
		printf("Invalid Usage");
	}

	num = atoi(argv[1]);

	temp = num;

	while(num!=0) {
		rem = num%10;
		revNum = revNum*10 + rem;
		num = num/10;
	}

	if(temp == revNum) {
		printf("Palindrome");
	} else {
		printf("Not A Palindrome");
	}
 }
