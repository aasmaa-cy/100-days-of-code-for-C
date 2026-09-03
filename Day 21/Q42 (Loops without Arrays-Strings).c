#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 42: Write a program to check if a number is a perfect number. */
int main(void) {
 int n,s=1;
if(scanf("%d",&n)!=1||n<1)return 1;
for(int i=2;
i<=n/i;
i++)if(n%i==0){
s+=i;
if(i!=n/i)s+=n/i;
}
puts(n>1&&s==n?"Perfect number":"Not perfect number");
 return 0;
}
