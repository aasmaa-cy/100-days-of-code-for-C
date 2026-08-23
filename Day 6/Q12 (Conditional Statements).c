#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 12: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1)return 1;
puts(n>0?"Positive":n<0?"Negative":"Zero");
 return 0;
}
