// Program to check whether entered date is the correct one
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
void main()
{
  int day,month,year,leapflag=0,ansflag=0; // if leapflag to check leap year and ansflag to check final ans
  printf("\nEnter date in dd/mm/yy format separated by space) \n");
  scanf("%d %d %d",&day,&month,&year);
  if(year%4==0) // To check if year is divisible by 4
  {
   if(year>=100 && year%100==0) // To check if year is a century year
   {
    if(year%400==0)
    {
      leapflag=1;
      }  
   }
   else // If year is not a century year
   {
     leapflag=1;
   }
  }
  switch(month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    if(day<=31 && day>=1) // for months with 31 days
    {
      ansflag=1;
    }
    break;
    case 2: // Specially for february
    if(leapflag==1)
    {
     if(day<=29 && day>=1)
     {
      ansflag=1;
     }
    }
    else
    {
     if(day<=28 && day>=1)
     {
      ansflag=1;
     }
    }
    break;
    case 4:
    case 6:
    case 9:
    case 11:
     if(day<=30 && day>=1)//for months with 30 days
    {
      ansflag=1;
    }
    break;
    }
    if(ansflag==1)
    {
     printf("Valid date\n");
    }
    else
    { 
     printf("Invalid date\n");
    }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


