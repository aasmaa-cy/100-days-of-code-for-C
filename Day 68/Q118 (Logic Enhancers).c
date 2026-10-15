/*
 * Question 118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
 */
#include <stdio.h>
int main(void){int n,x,sum=0;if(scanf("%d",&n)!=1||n<1)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;sum+=x;}printf("%d\n",n*(n+1)/2-sum);return 0;}
