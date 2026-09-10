/*
 * Question 65: Search in a sorted array using binary search.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 65: Search in a sorted array using binary search. */
int main(void) {
 int n,a[100],x,lo=0;
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
if(scanf("%d",&x)!=1)return 1;
int hi=n-1;
while(lo<=hi){
int m=lo+(hi-lo)/2;
if(a[m]==x){
printf("Found at index %d\n",m);
return 0;
}
if(a[m]<x)lo=m+1;
else hi=m-1;
}
puts("-1");
 return 0;
}
