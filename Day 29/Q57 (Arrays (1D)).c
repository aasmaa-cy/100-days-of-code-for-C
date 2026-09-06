/*
 * Question 57: Find the sum of array elements.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 57: Find the sum of array elements. */
int main(void) {
 int n,a[100];
long long s=0;
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++){
if(scanf("%d",&a[i])!=1)return 1;
s+=a[i];
}
printf("%lld\n",s);
 return 0;
}
