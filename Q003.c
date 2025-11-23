//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main(){
	int l,b,A,P;
	printf("Enter length of the rectangle: ");
	scanf("%d",&l);
	printf("Enter breadth of the rectangle: ");
	scanf("%d",&b);
	A=l*b;
	P=2*(l+b);
	printf("Area of rectangle is: %d", A);
	printf("\nPerimeter of rectangle is: %d", P);
	return 0;
}
