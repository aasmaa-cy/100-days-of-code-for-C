/*
 * Question 101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
 */
#include <stdio.h>
int main(void){int n,x,a[1000];if(scanf("%d",&n)!=1||n<1||n>1000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int lo=0,hi=n-1,first=-1,last=-1;while(lo<=hi){int mid=(lo+hi)/2;if(a[mid]>=x){if(a[mid]==x)first=mid;hi=mid-1;}else lo=mid+1;}lo=0;hi=n-1;while(lo<=hi){int mid=(lo+hi)/2;if(a[mid]<=x){if(a[mid]==x)last=mid;lo=mid+1;}else hi=mid-1;}printf("%d %d\n",first,last);return 0;}
