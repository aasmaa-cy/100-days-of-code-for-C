/*
 * Question 21: Write a program to display the month name and number of days using switch-case for a given month number.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 21: Write a program to display the month name and number of days using switch-case for a given month number. */
int main(void) {
 int m;
if(scanf("%d",&m)!=1||m<1||m>12)return 1;
const char*n[]={
"January","February","March","April","May","June","July","August","September","October","November","December"
}
;
int d[]={
31,28,31,30,31,30,31,31,30,31,30,31
}
;
printf("%s, %d days\n",n[m-1],d[m-1]);
 return 0;
}
