/*
 * Question 11: Write a program to input an integer and check whether it is even or odd using if–else.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 11: Write a program to input an integer and check whether it is even or odd using if-else. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1)return 1;
printf("%lld is %s\n",n,n%2?"odd":"even");
 return 0;
}
