/*
 * Question 66: Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 66: Insert an element in a sorted array at the appropriate position. */
int main(void) {
 int n,a[100],x;
if(scanf("%d",&n)!=1||n<0||n>=100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
if(scanf("%d",&x)!=1)return 1;
int p=0;
while(p<n&&a[p]<x)p++;
for(int i=n;
i>p;
i--)a[i]=a[i-1];
a[p]=x;
for(int i=0;
i<=n;
i++)printf("%d%c",a[i],i==n?'\n':' ');
 return 0;
}
