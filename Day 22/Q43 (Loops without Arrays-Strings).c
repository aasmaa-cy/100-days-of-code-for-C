#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 43: Write a program to check if a number is a strong number. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<1)return 1;
int t=n,s=0;
do{
int d=t%10,p=1;
for(int i=2;
i<=d;
i++)p*=i;
s+=p;
t/=10;
}
while(t);
puts(s==n?"Strong number":"Not strong number");
 return 0;
}
