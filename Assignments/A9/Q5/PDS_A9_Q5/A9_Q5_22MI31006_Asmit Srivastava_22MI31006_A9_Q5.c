#include<stdio.h>
struct Date{
int date;
int month;
int year;
};
struct Date ReadDate(){//read date
struct Date D;
printf("enter the date :");
scanf("%d %d %d" ,&D.date,&D.month,&D.year);
return D;
};


int main(){
struct Date D1;
D1=ReadDate();

return 0;
}
