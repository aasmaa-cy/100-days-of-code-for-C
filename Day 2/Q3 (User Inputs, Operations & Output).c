#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */
int main(void) {
 double l,w;
if(scanf("%lf %lf",&l,&w)!=2||l<0||w<0)return 1;
printf("Area=%.2f, Perimeter=%.2f\n",l*w,2*(l+w));
 return 0;
}
