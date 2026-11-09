/*
 * Question 143: Find and print the student with the highest marks.
 */
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
int main(void){int n;if(scanf("%d",&n)!=1||n<1||n>100)return 1;struct Student s,best;int first=1;for(int i=0;i<n;i++){if(scanf("%49s %d %f",s.name,&s.roll_no,&s.marks)!=3)return 1;if(first||s.marks>best.marks){best=s;first=0;}}printf("%s %d %.2f\n",best.name,best.roll_no,best.marks);return 0;}
