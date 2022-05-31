#include <stdio.h>

/*
Exercise 2:
Create a new Project and write a program to input a length in CMs. Calculate and print the 
equivalent (same) length in inches.

1 inch = 2.54cm

 */

int main(){
	
	float cm,inch;
	
	printf("Enter Length in Cm : ");
	scanf("%f",&cm);
	
	inch=cm/2.54;
	
	printf("\n%.f Cm Is = %.2f Inches ",cm,inch);
	
	
	
	return 0;
}