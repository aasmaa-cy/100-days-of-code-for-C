/*
 * Question 59: Count even and odd numbers in an array.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 59: Count even and odd numbers in an array. */
int main(void) {
 int n,a[100],e=0,o=0;
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++){
if(scanf("%d",&a[i])!=1)return 1;
if(a[i]%2)e++;
else o++;
}
printf("Even=%d, Odd=%d\n",o,e);
 return 0;
}
