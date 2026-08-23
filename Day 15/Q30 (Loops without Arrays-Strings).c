/*
 * Question 30: Write a program to reverse a given number.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 30: Write a program to reverse a given number. */
int main(void) {
 long long n,r=0;
if(scanf("%lld",&n)!=1)return 1;
long long x=n<0?-n:n;
do{
r=r*10+x%10;
x/=10;
}
while(x);
printf("%s%lld\n",n<0?"-":"",r);
 return 0;
}
