/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 9
Program to input date and find number of days 
*/
#include<stdio.h>
struct Date
       {
         int date;
         int month;
         int year;
       };
struct Date ReadDate()
     {
       struct Date D1;
       printf("Enter the date\n");
       scanf("%d %d %d",&D1.date,&D1.month,&D1.year);     // enter
       return D1;
      }
void PrintDate(struct Date x)
{
     printf("%d/%d/%d\n",x.date,x.month,x.year); //print
}
void FindDays(struct Date x,struct Date y)
    {
     int days=0,i,m;
     if((x.month=y.month)&&(x.year==y.year))  //same month
       {
          days=x.date-y.date;
          if(days<0)
            days=0-days;
          printf("Days = %d",days);
       }
   if(x.year!=y.year)
    {
      for(i=x.year+1;i<y.year;i++)  
        {
           if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2012)||(x.year==2016)||(x.year==2020))   //days in year
                     days=days+366;
                  else
                    days=days+365;
        }  
      i=x.month; 
       if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
          days=days+(31-x.date-2);
       else if ((i==4)||(i==6)||(i==9)||(i==11))
          days=days+(30-x.date-2); 
       else
                {
                  if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2012)||(x.year==2016)||(x.year==2020))   //days in month of same year
                     days=days+(29-x.date-2);
                  else
                    days=days+(28-x.date-2);
                }
     for(i=x.month+1;i<=12;i++)
           {
             if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                days=days+31;
             else if((i==4)||(i==6)||(i==9)||(i==11))
                 days=days+30;
             else
                {
                  if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2012)||(x.year==2016)||(x.year==2020))    //days in month of same year
                     days=days+29;
                  else
                    days=days+28;
                }
           }
        
    for(i=1;i<y.month;i++)
           {
             if ((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
                days=days+31;
             else if((i==4)||(i==6)||(i==9)||(i==11))
                 days=days+30;
             else
                {
                  if((x.year==2000)||(x.year==2004)||(x.year==2008)||(x.year==2012)||(x.year==2016)||(x.year==2020))   //days in month of same year
                     days=days+29;
                  else
                    days=days+28;
                }
           }
       days=days+y.date;
       
       printf("Days = %d",days);
}
}
     
int main()
   {
     struct Date d1,d2;
     d1=ReadDate();
     d2=ReadDate();
     printf("X = ");
     PrintDate(d1);
     printf("Y = ");
     PrintDate(d2);
     FindDays(d1,d2);
     return 0;
   }
