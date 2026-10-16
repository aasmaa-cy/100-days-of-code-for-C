/*
 * Question 119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 */
#include <stdio.h>
int main(void){int n,x,repeat=-1,seen[1001]={0};if(scanf("%d",&n)!=1||n<2||n>1000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1||x<0||x>1000)return 1;if(seen[x])repeat=x;seen[x]=1;}printf("%d\n",repeat);return 0;}
