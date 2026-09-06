/*
 * Question 58: Find the maximum and minimum element in an array.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 58: Find the maximum and minimum element in an array. */
int main(void) {
 int n,a[100];
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
int mx=a[0],mn=a[0];
for(int i=1;
i<n;
i++){
if(a[i]>mx)mx=a[i];
if(a[i]<mn)mn=a[i];
}
printf("Max=%d, Min=%d\n",mx,mn);
 return 0;
}
