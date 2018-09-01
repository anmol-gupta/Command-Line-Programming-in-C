*Problem Statement* - Program to find whether the given number is an Armstrong number or not using command line arguments.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(int argc, char *argv[]) {
 	int num, i, count = 0, sum = 0, temp;

 	if(argc!=2) {
		printf("Invalid Usage");
	}

	num = atoi(argv[1]);
	temp = num;

	while(num!=0) {
		count++;
		num /= 10;
	}

	num = temp;

	while(num!=0) {
		int rem = num%10;
		sum += pow(rem, count);
		num /= 10;
	}

	if(temp == sum) {
		printf("Armstrong Number.");
	} else {
		printf("Not an Armstrong Number");
	}

 }
