*Problem Statement* - Check whether the given year is a leap year or not using command line arguments.

#include<stdio.h>

int main(int argc, char *argv[]) {
	int year;
	if(argc!=2) {
		printf('Invalid');
	}
	year = atoi(argv[1]);

if(year % 4 == 0 ) {
	if(year % 100 == 0) {
	if(year % 400 == 0) 
   printf("%d is a leap year", year);
	 else 
	 printf("%d is not a leap year", year);
	 }else 
	printf("%d is a leap year\n", year);
}else 
	printf("%d is not a leap year.\n", year);
}
