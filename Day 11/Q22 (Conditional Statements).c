/*
 * Question 22: Write a program to find profit or loss percentage given cost price and selling price.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 22: Write a program to find profit or loss percentage given cost price and selling price. */
int main(void) {
 double c,s;
if(scanf("%lf %lf",&c,&s)!=2||c<=0)return 1;
if(s>c)printf("Profit %.2f%%\n",(s-c)*100/c);
else if(s<c)printf("Loss %.2f%%\n",(c-s)*100/c);
else puts("No Profit No Loss");
 return 0;
}
