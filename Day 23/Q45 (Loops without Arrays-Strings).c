#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<0)return 1;
double s=0;
for(int i=1;
i<=n;
i++)s+=2.0*i/(4.0*i-1);
printf("Approximate sum: %.2f\n",s);
 return 0;
}
