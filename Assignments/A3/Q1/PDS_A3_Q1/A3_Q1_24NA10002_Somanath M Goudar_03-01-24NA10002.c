#include <stdio.h>
int main()
{
int day, month, year;
scanf("%d, %d, %d", &day, &month, &year);
printf("THE GIVEN DATE IS %d %d %d",day,month,year);

if(day<=31,month<=12);

if(month=1||3||5||7||8||10||12){
  day<=31;
  printf("VALID DATE");
  }
  else{
  printf("INVALID DATE");
  }
if(month=4||6||9||11){
  day<=30;
 
  }
  else{
  }
 if(month=2){
 year%4==0&&year%100==0;
 day<=29;
 }
 else{
 day<=28;
 
 }
 return 0;
 }
