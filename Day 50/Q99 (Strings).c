/*
 * Question 99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>

int main(void)
{
    int dd,mm,yy; char sep1,sep2; if(scanf("%d%c%d%c%d",&dd,&sep1,&mm,&sep2,&yy)!=5)return 1; const char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"}; if(mm<1||mm>12)return 1; printf("%02d-%s-%04d\n",dd,months[mm-1],yy);return 0;
}
