/*
 * Question 27: Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 27: Write a program to print the sum of the first n odd numbers. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1||n<0)return 1;
printf("%lld\n",n*n);
 return 0;
}
