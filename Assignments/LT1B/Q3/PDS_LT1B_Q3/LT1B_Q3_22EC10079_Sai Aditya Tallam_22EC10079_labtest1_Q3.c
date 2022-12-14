#include<stdio.h>

int main()
{
int i, integers[100],max;
printf("enter numbers:");

for(int i=0; ;i++)
{ 
  scanf("%d",&integers[i]);
  if(integers[i]<0)
  {
   printf("<program terminates>");
  }
       if(i>0)
   {               
   for(i=0; ;i++)
   {
     int max=0;
     if(integers[i]>max)
      {
        printf("largest number:%d",integers[i]);
      }
   }
     }
 }
  return 0;
 }
