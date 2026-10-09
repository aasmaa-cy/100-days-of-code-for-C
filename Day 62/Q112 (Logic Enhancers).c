/*
 * Question 112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 */
#include <stdio.h>
int main(void){int n,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;long long sum=a[0],best=a[0];for(int i=1;i<n;i++){sum=sum+a[i]>a[i]?sum+a[i]:a[i];if(sum>best)best=sum;}printf("%lld\n",best);return 0;}
