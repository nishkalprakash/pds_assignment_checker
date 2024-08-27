#include <stdio.h>
int main()
   {
     int de,w,c;
     scanf("%d",&de);
     printf("deposit money:%d",de);
     scanf("%d",&w);
     printf("withdraw money:%d",w);
     if(w>de)
     printf("withdraw failed:balance is insuficient");
     else
     {
     c=de-w;
     printf("balance:%d",c);
     }
     return 0;
   }  
     
     
     
     
     
     
     
     
     
     
      
   
     
     
