#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 32: Write a program to check if a number is a palindrome. */
int main(void) {
 long long n,r=0;
if(scanf("%lld",&n)!=1)return 1;
long long x=n<0?-n:n,t=x;
do{
r=r*10+t%10;
t/=10;
}
while(t);
puts(n>=0&&r==x?"Palindrome":"Not palindrome");
 return 0;
}
