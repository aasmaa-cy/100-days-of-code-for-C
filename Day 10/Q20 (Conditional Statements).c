#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 20: Write a program to display the day of the week based on a number (1-7) using switch-case. */
int main(void) {
 int n;
if(scanf("%d",&n)!=1||n<1||n>7)return 1;
const char*d[]={
"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
}
;
puts(d[n-1]);
 return 0;
}
