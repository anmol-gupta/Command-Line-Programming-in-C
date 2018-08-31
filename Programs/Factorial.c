*Problem Statement* - Factorial program in c using command line arguments.

#include<stdio.h>

int main(int argc, char *argv[]) {

	int num,i,fact = 1;

	if(argc != 2) {
		printf('Invalid!');
	}

	num = atoi(argv[1]);

	if(num<0) {
		printf('Dont exist');
	}

	while(num > 1) {
		fact *= num;
		num--;
	}

	printf("Factorial of the number is %d\n", fact );
}
