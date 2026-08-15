/*
 * Question 14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 14: Write a program to input a character and check whether it is a vowel or consonant using if-else. */
int main(void) {
 char x;
if(scanf(" %c",&x)!=1)return 1;
x=(char)tolower((unsigned char)x);
if(x<'a'||x>'z')puts("Not an alphabet");
else puts(strchr("aeiou",x)?"Vowel":"Consonant");
 return 0;
}
