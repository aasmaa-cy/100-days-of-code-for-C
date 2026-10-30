/*
 * Question 133: Create an enum for months and print how many days each month has.
 */
#include <stdio.h>
enum Month { JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC };
int main(void){int m;if(scanf("%d",&m)!=1||m<JAN||m>DEC)return 1;int days=(m==FEB)?28:((m==APR||m==JUN||m==SEP||m==NOV)?30:31);printf("%d\n",days);return 0;}
