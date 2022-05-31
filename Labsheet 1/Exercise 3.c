#include <stdio.h>

/*

Exercise 3:
Create a new Project and write a program to print a multiplication table of a given input.
e.g. 
Enter Number : 5
5 x 1 = 5
5 x 2 = 10
…
5 x 12 = 60


 */

int main(){
	
	int num;
	int i=0;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(i=0;i<12;i++){
		printf("%d x %d = %d \n",num,i+1,(num*(i+1)));
	}
	

	
	
	
	return 0;
}