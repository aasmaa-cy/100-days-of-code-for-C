/*
 * Question 37: Write a program to find the LCM of two numbers.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 37: Write a program to find the LCM of two numbers. */
int main(void) {
 long long a,b;
if(scanf("%lld %lld",&a,&b)!=2||a==0||b==0)return 1;
long long x=a<0?-a:a,y=b<0?-b:b,u=x,v=y;
while(v){
long long t=u%v;
u=v;
v=t;
}
printf("%lld\n",x/u*y);
 return 0;
}
