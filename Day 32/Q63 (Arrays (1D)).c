/*
 * Question 63: Merge two arrays.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 63: Merge two arrays. */
int main(void) {
 int n,m,a[100],b[100];
if(scanf("%d",&n)!=1||n<0||n>100)return 1;
for(int i=0;
i<n;
i++)if(scanf("%d",&a[i])!=1)return 1;
if(scanf("%d",&m)!=1||m<0||n+m>100)return 1;
for(int i=0;
i<m;
i++)if(scanf("%d",&b[i])!=1)return 1;
for(int i=0;
i<n;
i++)printf("%d ",a[i]);
for(int i=0;
i<m;
i++)printf("%d%c",b[i],i==m-1?'\n':' ');
 return 0;
}
