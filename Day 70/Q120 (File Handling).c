/*
 * Question 120: Write a program to take a string input. Change it to sentence case.
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[1001];if(fgets(s,sizeof s,stdin)==NULL)return 1;int start=1;for(int i=0;s[i]!='\0';i++){if(isalpha((unsigned char)s[i])){putchar(start?toupper((unsigned char)s[i]):tolower((unsigned char)s[i]));start=0;}else{putchar(s[i]);if(s[i]=='.'||s[i]=='!'||s[i]=='?')start=1;else if(s[i]==' '||s[i]=='\t'){}else if(s[i]=='\n')start=1;}}return 0;}
