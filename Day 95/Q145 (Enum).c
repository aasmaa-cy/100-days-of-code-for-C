/*
 * Question 145: Return a structure containing top student's details from a function.
 */
#include <stdio.h>
struct Student { char name[50]; int roll_no; float marks; };
struct Student top(void){struct Student s[100],best;int n;if(scanf("%d",&n)!=1||n<1||n>100)return best= (struct Student){0},best;for(int i=0;i<n;i++)if(scanf("%49s %d %f",&s[i].name,&s[i].roll_no,&s[i].marks)!=3)return best=(struct Student){0},best;best=s[0];for(int i=1;i<n;i++)if(s[i].marks>best.marks)best=s[i];return best;}
int main(void){struct Student s=top();printf("%s %d %.2f\n",s.name,s.roll_no,s.marks);return 0;}
