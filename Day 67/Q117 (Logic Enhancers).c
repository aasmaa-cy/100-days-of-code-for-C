/*
 * Question 117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
 */
#include <stdio.h>
int main(void){int m,n,a[500],b[500];if(scanf("%d",&m)!=1||m<1||m>500)return 1;for(int i=0;i<m;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&n)!=1||n<1||n>500)return 1;for(int i=0;i<n;i++)if(scanf("%d",&b[i])!=1)return 1;int i=0,j=0,k=0,c[1000];while(i<m&&j<n)c[k++]=(a[i]<b[j])?a[i++]:b[j++];while(i<m)c[k++]=a[i++];while(j<n)c[k++]=b[j++];for(i=0;i<m+n;i++)printf("%d%c",c[i],i==m+n-1?'\n':' ');return 0;}
