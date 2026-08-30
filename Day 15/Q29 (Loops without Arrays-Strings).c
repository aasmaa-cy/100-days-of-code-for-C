#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 29: Write a program to calculate the factorial of a number. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<0||n>20)return 1;
unsigned long long p=1;
for(int i=2;
i<=n;
i++)p*=i;
printf("%llu\n",p);
 return 0;
}
