/*
 * Question 102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
 */
#include <stdio.h>
int main(void){int n,x,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int lo=0,hi=n-1,ans=-1;while(lo<=hi){int m=(lo+hi)/2;if(a[m]>=x){ans=m;hi=m-1;}else lo=m+1;}printf("%d\n",ans);return 0;}
