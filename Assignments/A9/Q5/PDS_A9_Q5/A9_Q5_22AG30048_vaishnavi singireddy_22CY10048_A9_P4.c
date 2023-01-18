/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 9
Description : to print dates and number of dates between two dates
*/
#include<stdio.h>
struct Date
{
int dt;
int mt;
int yr;
};
struct Date ReadDate() // method with return type date
{
struct Date d1;
printf("Enter date: ");
scanf("%d %d %d",&d1.dt,&d1.mt,&d1.yr);
return d1;
}
void printdate(struct Date x)
{
printf("%d/%d/%d",x.dt,x.mt,x.yr);
printf("\n");
}
void FindDays(struct  Date x, struct Date y) //function definition
{
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int yr1=x.yr;
int yr2=y.yr;
long int n1=x.yr*365+x.dt;
if(x.mt<=2)
{
yr1--;
}
int leapyrs1=(yr1/4+yr1/400-yr1/100); //for leap years
for(int i=0;i<x.mt-1;i++)
{
n1=n1+monthdays[i];
}
n1=n1+leapyrs1;
long int n2=y.yr*365+y.dt;
if(y.mt<=2)
{
yr2--;
}
int leapyrs2=(yr2/4+yr2/400-yr2/100);  //for leap years
for(int i=0;i<y.mt-1;i++)
{
n2=n2+monthdays[i];
}
n2=n2+leapyrs2;
if(n2>=n1)
printf("Days=%ld\n",(n2-n1));
else
printf("Days=%ld\n",(n1-n2));
}
int main()
{
struct Date d1=ReadDate();
struct Date d2=ReadDate();
printdate(d1); //print date
printdate(d2); //print date
FindDays(d1,d2);
return 0;
}

