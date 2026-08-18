#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 5: Write a program to convert temperature from Celsius to Fahrenheit. */
int main(void) {
 double c;
if(scanf("%lf",&c)!=1)return 1;
printf("Fahrenheit=%.2f\n",c*9/5+32);
 return 0;
}
