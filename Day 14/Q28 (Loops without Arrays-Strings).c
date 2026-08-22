/*
 * Question 28: Write a program to print the product of even numbers from 1 to n.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 28: Write a program to print the product of even numbers from 1 to n. */
int main(void) {
 long long n,p=1;
if(scanf("%lld",&n)!=1||n<1)return 1;
for(long long i=2;
i<=n;
i+=2)p*=i;
printf("%lld\n",p);
 return 0;
}
