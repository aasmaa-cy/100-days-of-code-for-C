/*
 * Question 108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 */
#include <stdio.h>
int main(void){int n,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;long long p=1;for(int i=0;i<n;i++)p*=a[i];for(int i=0;i<n;i++){if(a[i]==0){}printf("%lld%c",p/a[i],i==n-1?'\n':' ');}return 0;}
