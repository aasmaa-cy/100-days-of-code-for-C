/*
 * Question 113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
 */
#include <stdio.h>
int main(void){int n,k,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++)if(a[j]<a[i]){int t=a[i];a[i]=a[j];a[j]=t;}printf("%d\n",a[k-1]);return 0;}
