#include<stdio.h>
struct Date
{
int dd;
int mm;
int yyyy;
}
struct Date ReadDate()
{
struct Date dt;
printf("Enter the date : "); %d %d %d",&dt.dd,&dt.mm,&dt.yyyy);
scanf("%d %d %d",&dt.dd,&dt.mm,&dt.yyyy);
}
void PrintDate(struct Date x)
{
printf("%d %d %d",x.dd,x.mm,x.yyyy);
}
