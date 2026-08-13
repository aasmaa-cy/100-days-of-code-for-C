/*
 * Question 9: Write a program to calculate simple and compound interest for given principal, rate, and time.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 9: Write a program to calculate simple and compound interest for given principal, rate, and time. */
int main(void) {
 double p,r,t;
if(scanf("%lf %lf %lf",&p,&r,&t)!=3||p<0||t<0)return 1;
printf("Simple Interest=%.2f, Compound Interest=%.2f\n",p*r*t/100,p*(pow(1+r/100,t)-1));
 return 0;
}
