#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 33: Write a program to check if a number is an Armstrong number. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1||n<0)return 1;
long long t=n,s=0;
int k=n==0?1:0;
while(t){
k++;
t/=10;
}
t=n;
do{
int d=(int)(t%10);
s+=(long long)pow(d,k);
t/=10;
}
while(t);
puts(s==n?"Armstrong":"Not Armstrong");
 return 0;
}
