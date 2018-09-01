*Problem Statement* - Program for checking a perfect square.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
	int num, temp;

	if(argc!=2) {
		printf("Invalid Usage");
	}

	if(argc!=2) {
		printf("Invalid Usage!");
	}

	num = atoi(argv[1]);
	temp = sqrt(num);
	if(num%temp == 0) {
		printf("Perfect Square");
	} else {
		printf("Not a Perfect Square");
	}
}
