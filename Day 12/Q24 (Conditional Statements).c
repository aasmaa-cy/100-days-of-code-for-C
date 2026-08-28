#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 24: Write a program to calculate electricity bill based on units consumed with these rates: First 100 units at 5/unit;
 Next 100 units at 7/unit;
 Next 100 units at 10/unit;
 Above at 12/unit. */
int main(void) {
 int u;
if(scanf("%d",&u)!=1||u<0)return 1;
int b=u<=100?u*5:u<=200?500+(u-100)*7:u<=300?1200+(u-200)*10:2200+(u-300)*12;
printf("Bill: %d\n",b);
 return 0;
}
