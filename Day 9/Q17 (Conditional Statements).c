#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 17: Write a program to find the roots of a quadratic equation and categorize them. */
int main(void) {
 double a,b,d,e;
if(scanf("%lf %lf %lf",&a,&b,&e)!=3||a==0)return 1;
d=b*b-4*a*e;
if(d>0)printf("Roots are real and different: %.2f, %.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
else if(d==0)printf("Roots are real and same: %.2f\n",-b/(2*a));
else puts("Roots are complex");
 return 0;
}
