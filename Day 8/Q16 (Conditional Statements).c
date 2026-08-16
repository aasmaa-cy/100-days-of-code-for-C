/*
 * Question 16: Write a program to input three numbers and find the largest among them using if–else.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 16: Write a program to input three numbers and find the largest among them using if-else. */
int main(void) {
 double a,b,d;
if(scanf("%lf %lf %lf",&a,&b,&d)!=3)return 1;
double m=a>b?(a>d?a:d):(b>d?b:d);
printf("Largest is %.2f\n",m);
 return 0;
}
