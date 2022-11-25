#include<stdio.h>
  int main()
{  
    int SS,MM,HH;
    scanf("%d %d %d",&SS,&MM,&HH);
     if (SS>60||MM>60||HH>23 )
        {
           printf("Invalid Time");
         }
     else 
       printf("Valid Time- %d:%d:%d",HH,MM,SS);
              
        

     return 0;
}
