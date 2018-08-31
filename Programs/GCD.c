*Problem Statement* - Find the GCD of the given 2 numbers, using command line arguments.

#include<stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2;
	int gcd;

	if(argc != 3) {
		printf("Invalid Usage");
	};

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	while(n1!=n2) {
		if(n1>n2) {
			n1 -= n2;
		} else {
			n2 -= n1;
		}
	}
	printf("GCD: %d", n1);
}
