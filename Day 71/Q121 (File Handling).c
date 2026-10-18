/*
 * Question 121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 */
#include <stdio.h>
int main(void){char name[100];int age;printf("Name: ");if(fgets(name,sizeof name,stdin)==NULL)return 1;for(int i=0;name[i];i++)if(name[i]=='\n'){name[i]='\0';break;}printf("Age: ");if(scanf("%d",&age)!=1||age<0)return 1;FILE *fp=fopen("info.txt","w");if(fp==NULL)return 1;fprintf(fp,"Name: %s\nAge: %d\n",name,age);fclose(fp);puts("Data saved successfully.");return 0;}
