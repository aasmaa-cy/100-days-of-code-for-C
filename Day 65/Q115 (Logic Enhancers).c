/*
 * Question 115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
 */
#include <stdio.h>
#include <string.h>
int main(void){char s[1001],t[1001];if(fgets(s,sizeof s,stdin)==NULL||fgets(t,sizeof t,stdin)==NULL)return 1;size_t ls=strcspn(s,"\n"),lt=strcspn(t,"\n");int f[256]={0},ok=ls==lt;for(size_t i=0;i<ls;i++)f[(unsigned char)s[i]]++;for(size_t i=0;i<lt;i++)f[(unsigned char)t[i]]--;for(int i=0;i<256;i++)if(f[i])ok=0;puts(ok?"Anagram":"Not Anagram");return 0;}
