/*
 * Question 147: Store employee data in a binary file using fwrite() and read using fread().
 */
#include <stdio.h>
struct Employee { char name[50];int id;float salary; };
int main(void){struct Employee e;if(scanf("%49s %d %f",e.name,&e.id,&e.salary)!=3)return 1;FILE *fp=fopen("employees.bin","wb");if(!fp)return 1;fwrite(&e,sizeof e,1,fp);fclose(fp);fp=fopen("employees.bin","rb");if(!fp)return 1;if(fread(&e,sizeof e,1,fp)==1)printf("%s %d %.2f\n",e.name,e.id,e.salary);fclose(fp);return 0;}
