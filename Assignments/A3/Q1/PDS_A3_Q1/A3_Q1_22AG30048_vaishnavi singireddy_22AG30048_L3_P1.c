#include<stdio.h>
int main()
{    
   int SS,MM,HH;
   printf("read three integers representing   time of a day");
  scanf("%d%d%d",&SS,&MM,&HH);
   if (SS<=60,MM<=60,HH<24)
    {
     printf("valid time");
    }
    else 
    {
      printf("invalid time");
    }
      return 0;
}

