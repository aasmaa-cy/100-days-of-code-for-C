/*
 * Question 129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
 */
#include <stdio.h>
int main(void){FILE *fp=fopen("numbers.txt","r");if(!fp)return 1;int x,count=0,total=0;while(fscanf(fp,"%d",&x)==1){total+=x;count++;}fclose(fp);if(count==0){puts("0\n0.00");return 0;}printf("Sum: %d\nAverage: %.2f\n",total,(double)total/count);return 0;}
