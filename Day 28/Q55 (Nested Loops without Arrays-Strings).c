/*
 * Question 55: Write a program to print all the prime numbers from 1 to n.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 55: Write a program to print all the prime numbers from 1 to n. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<2)return 1;
for(int x=2;
x<=n;
x++){
int p=1;
for(int d=2;
d<=x/d;
d++)if(x%d==0)p=0;
if(p)printf("%d%c",x,x==n?'\n':' ');
}
 return 0;
}
