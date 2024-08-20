#include<stdio.h>
int main ()
{
 int d,m,y;
 printf("Enter the date of birth(dd-mm-yyyy)\n");
 scanf(" %d %d %d", &d,&m,&y);
   
   if(m==1 || m==3 || m==5|| m==7 || m==8 || m==11,||1<=d<=31)
   {
     printf("valid date");
   }
   
   else if(m==1 || m==3 || m==5||m==9|| m==10|| m==12)  &&(1<=d<=31)
   {
    printf("Invalid date");
    if(m==2|| m==4|| m==6|| m==7|| m==9|| m== 11|| ) && (date>30)
    }
    else if(m==2)
    {
     if(y%4!=0,1<=d<=28)
     {
     printf("Valid date\n");
     
      if(y%4==0)
      {
       if(y%100!==0 &&y%400!=0 &&1<=d<=29)
       {
        printf("Valid date\n");
        }
         if(y%100==0&&y%400!=0&&1<=d<=28)
         {
         printf("Valid date\n");
         if(y%100==0&&y%400!=0&&d>28)
         {
          printf("Valid date\n");
          if(y%400!=0,1<=29)
          {
          printf("Valid date\n");
      
        
     if(y%400==0&&d>29)
     {
        printf("Valid date\n");
        }
       }
      }
     if(d>31 && m>12) 
     {
     printf("Invalid date\n");
     else 
     printf("Valid date\n");
     }
     getchar();
     return 0;
     }
     
    
 
