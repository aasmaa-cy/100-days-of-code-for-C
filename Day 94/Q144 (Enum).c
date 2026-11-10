/*
 * Question 144: Write a function that accepts a structure as parameter and prints its members.
 */
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
void print_student(struct Student s){printf("%s %d %.2f\n",s.name,s.roll_no,s.marks);}
int main(void){struct Student s;if(scanf("%49s %d %f",s.name,&s.roll_no,&s.marks)!=3)return 1;print_student(s);return 0;}
