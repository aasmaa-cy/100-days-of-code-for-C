/*
 * Question 23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 23: Write a program to calculate library fine based on late days as follows: First 5 days late: 2/day;
 Next 5 days late: 4/day;
 Next 20 days late: 6/day;
 More than 30 days: Membership Cancelled. */
int main(void) {
 int d;
if(scanf("%d",&d)!=1||d<0)return 1;
if(d>30)puts("Membership Cancelled");
else{
int f=d<=5?d*2:d<=10?10+(d-5)*4:20+(d-10)*6;
printf("Fine %d\n",f);
}
 return 0;
}
