#include<stdio.h>

  int main()
  {    
      int SS,MM,HH;
      printf("enter second");
      scanf("%d",&SS);
      printf("enter minutes");
      scanf("%d",&MM);
      printf("enter hour");
      scanf("%d",&HH);
       
      if (SS<60 && MM<60 && HH<24){
      printf("valid time=%d:%d:%d ",HH,MM,SS);
      }
      else {
          printf("invalid time");
      
      }
  return 0;
  
  
  
  
  }
