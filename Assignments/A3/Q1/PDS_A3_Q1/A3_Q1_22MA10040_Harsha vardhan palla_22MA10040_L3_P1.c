/*section 14 Roll no:22MA10040 Name:P.Sri Harsha vardhan Assignment no:1 desc: To differentiate between valid time and invalid time*/
#include<stdio.h>
int main()
{
           int SS,MM,HH;
           scanf("%d %d %d",&SS,&MM,&HH);
           if(SS<60&&MM<60&&HH<24)
           printf("valid time_ %d:%d:%d",HH,MM,SS);
           else 
           printf("Invalid time");
           return 0;
 


}
