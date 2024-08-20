//write a program that takes 3 integers as input :date,month,year
//code creater:m.yasaswitha
//roll no:24NA10037
#include<stdio.h>
#include<math.h>
int main()
{
int date,month,year;
scanf("%d %d %d",&date,&month,&year);
if(date<=31&&month==1,3,5,7,8,10,12&&year){
printf("valid date");
}
else if(date>31&&month==1,3,5,7,8,10,12&&year)
printf("invalid date");
else if(date<=30&&month==4,6,9,11&&year)
printf("valid date");
else if(date>30&&month==4,6,9,11&&year)
printf("invalid date");
else if(date<=29&&month==2&&year%4==0)
printf("valid date");
else if(date<=28&&month==2&&year%4!=0)
printf("valid date");
else if(date>29&&month==2&&year)
printf("invalid date");
return 0;
}
