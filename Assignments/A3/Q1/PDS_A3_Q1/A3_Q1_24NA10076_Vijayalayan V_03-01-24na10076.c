#include<stdio.h>
int main()
{
    int date,month,year;
    printf("print date\n");
    scanf("%d%d%d",&date,&month,&year);
    if ((month<=12)&&(month>=1))
       {if ((month%2)!=0)
       {
    	if ((date>=1)&&(date<=31))
           printf("valid date\n");
         else printf("invalid date\n");
       }
       else if (month==2)
           {
           
             if ((year%4==0)||((year%400==0)||(year%100==0)))
                {
                 if ((date>=1)&&(date<=29))
                   printf("valid date\n");
                 }
              else if ((date>=1)&&(date<=28))
                     {printf("valid date\n");}
              else printf("invalid date\n");
            }
        else if  (month%2==0)
              {
              if ((date>=1)&&(date<=30))
                  printf("valid date\n");
              else printf("invalid date\n");
              }
         }
    else printf("invalid date\n");
    return 0;            
}                
