#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	int num, i = 0;
	int arr[100];

	if(argc!=2) {
		printf("Invalid Usage");
	}

	num = atoi(argv[1]);

	while(num>0) {
		arr[i] = num%2;
		num = num/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		printf("%d\n", arr[j]);
	}
}