#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 39: Write a program to find the product of odd digits of a number. */
int main(void) {
 long long n,p=1;
if(scanf("%lld",&n)!=1)return 1;
if(n<0)n=-n;
int found=0;
do{
int d=n%10;
if(d%2){
p*=d;
found=1;
}
n/=10;
}
while(n);
printf("%lld\n",found?p:1);
 return 0;
}
