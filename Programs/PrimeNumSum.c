*Problem Statement* - Program that will find the sum of all prime numbers in a given range. 
The range will be specified as command line parameters. The first command line parameter, N1 which is a positive integer,
will contain the lower bound of the range. The second command line parameter N2, which is also a positive integer will 
contain the upper bound of the range. The program should consider all the prime numbers within the range,
excluding the upper bound and lower bound.

#include<stdio.h>
#include <stdlib.h> 


int main(int argc, char *argv[]){
	int low, high, i, j, sum = 0, flag = 1;
	low = atoi(argv[1]);
	high = atoi(argv[2]);

	for(i=low+1;i<high;i++) {
		for(j=2;j<(i/2);j++) {
			if(i%j == 0) {
				flag = 0;
			} 
		}
		if (flag == 1) {
			sum += i;
		}
	}
	printf("%d\n", sum);
}
