#include<stdio.h>
int main()
{
   int SS,MM,HH;
   
   printf("enter the values of seconds then minutes and then hours:");
   scanf("%d %d %d",&SS,&MM,&HH);
 
  if((SS<60)&&(MM<60)&&(HH<24))
 {
  printf("Valid time-%d:%d%d",HH,MM,SS);
 }
  else
  printf("invalid time\n");
  
    
  return 0;

}
