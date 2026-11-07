/*
 * Question 141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 */
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
int main(void){struct Student s;if(scanf("%49s %d %f",s.name,&s.roll_no,&s.marks)!=3)return 1;printf("%s %d %.2f\n",s.name,s.roll_no,s.marks);return 0;}
