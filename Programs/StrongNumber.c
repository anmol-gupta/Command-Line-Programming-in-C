*Problem Statement* - Check whether a given number is a strong number or not.
The given number N, a positive integer, will be passed to the program using the first command line parameter.


#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fact(int n) {
	int fact = 1;

	while(n>1) {
		fact *= n;
		n--;
	}
	return fact;
}

int main(int argc, char *argv[]) {
	int num, i, temp, sum = 0;
	if(argc!=2) {
		printf("Invalid Usage");
	}
	num = atoi(argv[1]);
	temp = num;
	while(temp!=0) {
		i = temp%10;
		sum += fact(i);
		temp = temp/10;
	}
	if(sum==num){
		printf("Strong Number");
	} else {
		printf("Not a strong number");
	}

}

