#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 35: Write a program to print all factors of a given number. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<1)return 1;
for(int i=1;
i<=n;
i++)if(n%i==0)printf("%d%c",i,i==n?'\n':' ');
 return 0;
}
