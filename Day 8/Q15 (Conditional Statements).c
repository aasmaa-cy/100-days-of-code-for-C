#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. */
int main(void) {
 char x;
if(scanf(" %c",&x)!=1)return 1;
if(isupper((unsigned char)x))puts("Uppercase alphabet");
else if(islower((unsigned char)x))puts("Lowercase alphabet");
else if(isdigit((unsigned char)x))puts("Digit");
else puts("Special character");
 return 0;
}
