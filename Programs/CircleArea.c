*Problem Statement* - Find the area of a circle when the diameter is given, using command line arguments.
The input diameter is an integer and the output area should be a floating point variable with 2 point precision.


#define PI 3.14
#include<stdio.h>
int main(int argc, char *argv[]) {

 int diameter, radius;
 float area;

 if(argc!=2) {
 printf("Invalid Usage");
  }

 diameter = atoi(argv[1]);
 radius = diameter/2; 
 area = (PI*radius*radius);

 printf("Area: %.2f", area);

}


