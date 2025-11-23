//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(){
	int a,b,sum,diff,pro;
	float quo;
	printf("Enter 1st number: ");
	scanf("%d",&a );
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	quo=a/b;
	printf("The sum of 2 numbers is: %d", sum);
	printf("\nThe difference of 2 numbers is: %d", diff);
	printf("\nThe product of 2 numbers is: %d", pro); 
	printf("\nThe quotient of 2 numbers is: %f", quo);
	return 0;
}
