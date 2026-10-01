/*
 * Question 104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
 */
#include <stdio.h>
int main(void){int n; if(scanf("%d",&n)!=1||n<1)return 1;long long lo=1,hi=n,ans=-1;while(lo<=hi){long long x=(lo+hi)/2;long long left=x*(x+1)/2,right=n*(n+1)/2-x*(x-1)/2;if(left==right){ans=(int)x;break;}if(left<right)lo=x+1;else hi=x-1;}printf("%lld\n",(long long)ans);return 0;}
