#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 60: Count positive, negative, and zero elements in an array. */
int main(void) {
 int n,a[100],p=0,ne=0,z=0;
if(scanf("%d",&n)!=1||n<1||n>100)return 1;
for(int i=0;
i<n;
i++){
if(scanf("%d",&a[i])!=1)return 1;
if(a[i]>0)p++;
else if(a[i]<0)ne++;
else z++;
}
printf("Positive=%d, Negative=%d, Zero=%d\n",p,ne,z);
 return 0;
}
