/*
 * Question 4: Write a program to calculate the area and circumference of a circle given its radius.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 4: Write a program to calculate the area and circumference of a circle given its radius. */
int main(void) {
 double r;
if(scanf("%lf",&r)!=1||r<0)return 1;
printf("Area=%.2f, Circumference=%.2f\n",acos(-1)*r*r,2*acos(-1)*r);
 return 0;
}
