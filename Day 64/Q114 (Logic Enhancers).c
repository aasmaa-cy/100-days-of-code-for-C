/*
 * Question 114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 */
#include <stdio.h>
#include <string.h>
int main(void){char s[1001];if(fgets(s,sizeof s,stdin)==NULL)return 1;size_t len=strcspn(s,"\n");int best=0;for(size_t i=0;i<len;i++){int seen[256]={0},cur=0;for(size_t j=i;j<len;j++){unsigned char c=(unsigned char)s[j];if(seen[c])break;seen[c]=1;cur++;if(cur>best)best=cur;}}printf("%d\n",best);return 0;}
