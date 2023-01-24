#include<stdio.h>
struct Date {
int date; 
int month;
int year;
}D;
struct Date ReadDate()
{
scanf("%d %d %d",&D.date,&D.month,&D.year);
printf("\n");
};
void PrintDate(struct Date x)
{
printf("%d %d %d",D.date,D.month,D.year);
printf("\n");
}


/*void FindDays(struct Date x,struct Date y)
{
int yr1=x.year;
int yr2=y.year;
int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int days=0;
if(yr1==yr2){
if(x.month == y.month){
days+=y.date-x.date;
}
if(x.month!=y.month){
for(i=x.month;i<=y.month;i++)
{
days+=(monthdays[i+1]-x.day)+
}

}

}
*/


int main()
{
for(int i=1;i<=2;i++){
printf("Enter %d date",i);
ReadDate();
}

return 0;
}
