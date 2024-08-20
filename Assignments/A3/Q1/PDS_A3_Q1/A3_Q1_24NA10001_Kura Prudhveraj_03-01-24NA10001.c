#include<stdio.h>


 int main()
{
  unsigned int day,month,year;
  char DATE;
  
 scanf("%ud",&day);
 scanf("%ud",&month);
 scanf("%ud",&year);
  
 printf("THE GIVEN DATE IS %u %u %u ",day,month,year);
    
    
  if (day<=31,month<=12){
  
    if(month=1||3||5||7||8||10||12){
     day<=31;
     printf("VALID DATE\n");
     }
     else {
     printf("IN VALID DATE");
     }
     
     if(month= 4||6||7||9||11){
       day<=30;
       
       }
       else {
       printf("IN VALID DATE");
       }
        if (month=2&&year%4==0&&year%100==0){
       
       printf("that the year is divisible by 400 and it's not a    leap year\n");
       }
       else if (month=2 && year%4==0&&(year%100)!=0){
       printf(" and  the year is a leap year\n");
       }
       
       }
       return 0;
       }
       
       
       
    
     

