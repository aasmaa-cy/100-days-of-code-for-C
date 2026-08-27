#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */
int main(void) {
 double a,b,d;
if(scanf("%lf %lf %lf",&a,&b,&d)!=3||a<=0||b<=0||d<=0||a+b<=d||a+d<=b||b+d<=a)return 1;
puts(a==b&&b==d?"Equilateral":a==b||a==d||b==d?"Isosceles":"Scalene");
 return 0;
}
