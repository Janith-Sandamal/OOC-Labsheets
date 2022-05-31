#include <stdio.h>

/*

Exercise 4:
Create a new Project and write a program to implement the following functions.
int Square(int x) ? X*X
int Cube(int x) ? X*X*X
Write a main() function to call these two functions

 */

int square(int x){
	int z = x*x;
	
	printf("\n Square : %d \n",z);
}

int cube(int x){
	int y = x*x*x;
	
	printf("\n Cube : %d \n",y);
	
}

int main(){
	
	int num;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	square(num);
	
	cube(num);
	

	return 0;
}