/*
 * Question 130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
 */
#include <stdio.h>
struct Student{char name[50];int roll;float marks;};int main(void){struct Student s[100];int n;if(scanf("%d",&n)!=1||n<1||n>100)return 1;FILE *fp=fopen("students.txt","w");if(!fp)return 1;for(int i=0;i<n;i++){if(scanf("%49s %d %f",s[i].name,&s[i].roll,&s[i].marks)!=3){fclose(fp);return 1;}fprintf(fp,"%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);}fclose(fp);fp=fopen("students.txt","r");if(!fp)return 1;for(int i=0;i<n;i++){if(fscanf(fp,"%49s %d %f",s[i].name,&s[i].roll,&s[i].marks)!=3)break;printf("%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);}fclose(fp);return 0;}
