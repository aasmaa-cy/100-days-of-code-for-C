#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
int main(void) {
 long long s;
if(scanf("%lld",&s)!=1||s<0)return 1;
printf("%lld:%lld:%lld\n",s/3600,(s%3600)/60,s%60);
 return 0;
}
