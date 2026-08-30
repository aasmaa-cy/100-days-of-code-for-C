#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 31: Write a program to take a number as input and print its equivalent binary representation. */
int main(void) {
 unsigned long long n;
if(scanf("%llu",&n)!=1)return 1;
if(!n){
puts("0");
return 0;
}
char b[65];
int i=0;
while(n){
b[i++]=(char)('0'+n%2);
n/=2;
}
while(i--)putchar(b[i]);
putchar('\n');
 return 0;
}
