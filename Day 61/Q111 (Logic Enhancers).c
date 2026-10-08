/*
 * Question 111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
 */
#include <stdio.h>
int main(void){int n,k,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<=n-k;i++){int neg=0;for(int j=i;j<i+k;j++)if(a[j]<0){neg=a[j];break;}printf("%d%c",neg,i==n-k?'\n':' ');}return 0;}
