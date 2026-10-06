/*
 * Question 109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 */
#include <stdio.h>
int main(void){int n,k,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&k)!=1||k<1||k>n)return 1;long long sum=0,max_sum=0;for(int i=0;i<k;i++)sum+=a[i];max_sum=sum;for(int i=k;i<n;i++){sum+=a[i]-a[i-k];if(sum>max_sum)max_sum=sum;}printf("%lld\n",max_sum);return 0;}
