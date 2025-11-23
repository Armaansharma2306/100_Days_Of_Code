//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main(){

 	int r;
    printf("Enter the radius fo circle: ");
    scanf("%d", &r);
    float ac,pc;
    ac= 3.1415*r*r;
    pc=2*3.1415*r;
    printf("\nPerimeter of circle is: %f",pc);
    printf("\nArea of circle is: %f", ac);
    return 0;
    }
