/*
 * Question 6: Write a program to swap two numbers using a third variable.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 6: Write a program to swap two numbers using a third variable. */
int main(void) {
 long long a,b;
if(scanf("%lld %lld",&a,&b)!=2)return 1;
long long t=a;
a=b;
b=t;
printf("After swap: %lld %lld\n",a,b);
 return 0;
}
