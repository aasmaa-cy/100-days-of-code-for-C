/*
 * Question 40: Write a program to find the 1’s complement of a binary number and print it.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 40: Write a program to find the 1's complement of a binary number and print it. */
int main(void) {
 char s[256];
if(scanf("%255s",s)!=1)return 1;
for(size_t i=0;
s[i];
i++){
if(s[i]!='0'&&s[i]!='1')return 1;
putchar(s[i]=='0'?'1':'0');
}
putchar('\n');
 return 0;
}
