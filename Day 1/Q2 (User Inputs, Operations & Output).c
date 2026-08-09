/*
 * Question 2: Write a program to input two numbers and display their sum, difference, product, and quotient.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 2: Write a program to input two numbers and display their sum, difference, product, and quotient. */
int main(void) {
 double a,b;
if(scanf("%lf %lf",&a,&b)!=2)return 1;
printf("Sum=%.2f, Diff=%.2f, Product=%.2f, ",a+b,a-b,a*b);
if(b==0)puts("Quotient undefined");
else printf("Quotient=%.2f\n",a/b);
 return 0;
}
