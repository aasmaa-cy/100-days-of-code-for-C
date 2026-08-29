/*
 * Question 41: Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 41: Write a program to swap the first and last digit of a number. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1)return 1;
if(n<0){
putchar('-');
n=-n;
}
if(n<10){
printf("%lld\n",n);
return 0;
}
long long p=1,t=n;
while(t>=10){
p*=10;
t/=10;
}
int f=n/p,l=n%10;
printf("%lld\n",n-f*p-l+(long long)l*p+f);
 return 0;
}
