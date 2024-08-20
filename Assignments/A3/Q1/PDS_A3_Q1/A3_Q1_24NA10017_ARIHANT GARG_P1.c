#include <stdio.h>

//Name:Arihant Garg
//Roll No:24NA10017

int main(){

int date,month,year;

printf("Enter a date in the format DD MM YYYY\n");

scanf("%d\t%d\t%d",&date,&month,&year);


if (year%4!=0)
{

if(month==12 || month==10 || month==8 || month==7 || month==5 || month==3 || month==1 && date<31 && date>0) //for months with 31 days

printf("Valid Date\n");

else if (month==2 && date<28 && date>0)


printf("Valid Date \n");

else if(month==4 || month==6 || month==9 || month==11 && date<30 &&date>0)//for months with 30 days

printf("Valid Date\n");


}



if (year%4==0)
{

if(month==12 || month==10 || month==8 || month==7 || month==5 || month==3 || month==1 && date<31 && date>0) //for months with 31 days

printf("Valid Date\n");

else if (month==2 && date<29 && date>0)



printf("Valid Date \n");

else if(month==4 || month==6 || month==9 || month==11 && date<30 &&date>0) //for months with 30 days

printf("Valid Date\n");


else printf("Invalid Date");
}



return 0;
}









