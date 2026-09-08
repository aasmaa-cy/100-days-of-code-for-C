/*
 * Question 61: Search for an element in an array using linear search.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 61: Search for an element in an array using linear search. */
int main(void) {
 int n,a[100],x,f=-1;
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
if(scanf("%d",&x)!=1)return 1;
for(int i=0;
i<n;
i++)if(a[i]==x){
f=i;
break;
}
if(f>=0)printf("Found at index %d\n",f);
else puts("-1");
 return 0;
}
