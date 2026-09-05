/*
 * Question 56: Read and print elements of a one-dimensional array.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 56: Read and print elements of a one-dimensional array. */
int main(void) {
 int n,a[100];
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
for(int i=0;
i<n;
i++)printf("%d%c",a[i],i==n-1?'\n':' ');
 return 0;
}
