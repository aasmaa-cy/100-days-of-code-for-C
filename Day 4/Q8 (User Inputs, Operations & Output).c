#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 8: Write a program to find and display the sum of the first n natural numbers. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1||n<0)return 1;
printf("Sum=%lld\n",n*(n+1)/2);
 return 0;
}
