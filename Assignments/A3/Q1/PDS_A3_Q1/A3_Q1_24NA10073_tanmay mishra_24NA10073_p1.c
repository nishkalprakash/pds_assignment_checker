#include<stdio.h>
//code creator : tanmay mishra
//roll number : 24na10073

int main()

{

int date,month,year;

printf("enter date in the formate : date month year");
scanf("%d%d%d" , &date,&month,&year);

if(month == 1 && month == 3 && month ==5 && month == 7 && month == 8 && month == 10 && month == 12 && date <= 31 && date > 0)
{
printf("valid date");
}


else if (month == 4 && month == 6 && month == 9 && month == 11  && date <= 30 && date > 0 )

{

printf("valid date");
}



 else if (month == 2  && year%4==0 && year%400==0  && year%100!=0 && date <= 29 && date>0)
 


{ 

printf(" valid date");


}



else if (month == 2 && year%100==0  &&  year%4 !=0 && year%400 != 0   && date <= 28 && date>0)
 

{

printf("valid date " );
}

else  {

printf ("invalid date");
}



return 0;


}
