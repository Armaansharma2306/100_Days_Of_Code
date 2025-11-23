//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter first digit: ");
	scanf("%d",&a);
	printf("Enter second digit: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=a;
	printf("%d %d",b,c);
	return 0;
}
