//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//To check whether the entered date is valid or invalid
#include<stdio.h>
int main()
{
     
      int d,m,y;
      printf("Enter a Date:");
      scanf("%d %d %d",&d,&m,&y);
      if(y%4!=0)
         if(y%100=0)
      printf("the date is invalid");
        
      else if((d<=31) && (d>=1))
           ((m<=12) && (m>=1))
           ((y>=0000 && (y<=9999)));
         printf("the date is valid");
         
        else
           printf("the date is invalid");
         
         
      return 0;
}
     
     
