#include<stdio.h>
int main()
{
      int day,month,year;
      printf("enter date in dd/mm/year format");
     scanf("%d%d%d",&day,&month,&year);
      if(month==2&& day>29)
      printf("invalid date");
      if(day>31|month>12)
      printf("invalid date");
      if(month==2 && day==29 && year%4!=0 | day>29)
      printf("invalid date");
      
     else if(month==4|month==6|month==9|month==11 && day==31)
     printf("invalid date");
     else
     printf("valid date");
      return 0;
}
      
    
      
