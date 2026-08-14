#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 1: Write a program to input two numbers and display their sum. */
int main(void) {
 double a,b;
if(scanf("%lf %lf",&a,&b)!=2)return 1;
printf("Sum = %.2f\n",a+b);
 return 0;
}
