#include<stdio.h>
int main()
{
     //program to check valid date
     //code creator: Mohd Abutalha
     //roll no. : 24NA10040
     int day,month,year ;
     scanf("%d%d%d", &day,&month,&year);
     if (day>31)
     printf(" invalid date1");
     else if (month>12)
     printf("invalid date2");
     else if (day == 31 && month == 4)
     printf("invalid date3");
     else if (day == 31 && month == 6)
     printf("invalid date4");
     else if (day == 31 && month == 9)
     printf("invalid date5");
     else if (day == 31 && month == 11)
     printf("invalid date6");
     else if (month==2 && day>29 )
     printf("invalid date7");
     else if (month==2 && day==29 && year%4!=0)
     printf("invalid date8");
     else
     printf("valid date");
     return 0;
}
