/*
 Section      : 14
 Roll number  : 22CS10009
 Name         : Tejasree Sai
 Assignment no:3
 Description  : To check valid time
*/

#include<stdio.h>
int main ()
{
  int SS,MM,HH;
  printf("enter the time in seconds minutes hours format\n");
  scanf ("%d %d %d",&SS,&MM,&HH);
  
  if (SS<60 && MM<60 && HH<24)
   {
     printf("Valid time- %d:%d:%d\n",HH,MM,SS);
    }
  else
  {
   printf("Invalid time\n");
  }
 return 0;
}
