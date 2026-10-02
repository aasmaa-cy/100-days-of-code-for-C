/*
 * Question 105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 */
#include <stdio.h>
int main(void){int n,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;int candidate=a[0],count=0;for(int i=0;i<n;i++){if(count==0)candidate=a[i];count+=(a[i]==candidate)?1:-1;}count=0;for(int i=0;i<n;i++)if(a[i]==candidate)count++;printf("%d\n",count>n/2?candidate:-1);return 0;}
