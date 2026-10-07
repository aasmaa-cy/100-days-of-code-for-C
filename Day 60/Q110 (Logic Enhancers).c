/*
 * Question 110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 */
#include <stdio.h>
int main(void){int n,k,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<=n-k;i++){int m=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>m)m=a[j];printf("%d%c",m,i==n-k?'\n':' ');}return 0;}
