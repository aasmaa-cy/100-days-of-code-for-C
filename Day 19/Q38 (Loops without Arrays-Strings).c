#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 38: Write a program to find the sum of digits of a number. */
int main(void) {
 long long n,s=0;
if(scanf("%lld",&n)!=1)return 1;
if(n<0)n=-n;
do{
s+=n%10;
n/=10;
}
while(n);
printf("%lld\n",s);
 return 0;
}
