//program cretor Shatakshi Shukla
//roll no. 24NA10067
//PROGRAM TO PRINT DATE



#include <stdio.h>
int main()
{
  int day,month,year;
  printf("Enter Day:\n");
  scanf("%d",&day);
  printf("Enter Month:\n");
  scanf("%d",&month);
  printf("Enter Year:\n");
  scanf("%d",&year);
  if(month>=1 && month<=12)
  {
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
      if(day>=1 && day<=31)
      {
      printf("Date is Valid \n");
      printf("Date is: %d %d %d \n", day ,month, year);
      }
      else 
      {
      printf("Invalid Date");
      }
      }
      if( month==4 || month==6 || month==9 || month==11)
      {
        if(day>=1 && day<=30)
        {
        printf("Date is valid");
        printf("Date is :%d %d %d \n", day ,month ,year);
        }
        else
        {
        printf("invalid date ");
        }
        }
      if(month==2)
      {
        if(year%400==0)        //TO CHECK IF IT IS A LEAP YEAR
        {
          if(day>=1 && day<=29)
          {
            printf("Date is valid \n");
            printf ("Date is:%d %d %d \n", day, month, year); 
            }
            }
         else
         {
            if(day>=1 && day<=28)
            {
            printf("Date is valid \n");
            printf ("Date is:%d %d %d \n", day, month, year); 
            }
            }
            }
            }
            else
            printf("Invalid Date");
            }
            
            
            
        
    
    
    
    
