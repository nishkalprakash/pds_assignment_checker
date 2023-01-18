include <stdio.h>
typedef struct date
{
int day;
int month;
int year;
}date;
void readdate()
{
scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

}
void Printdate(date x,date y)
{
printf("%d/ %d/ %d",&x.day,x.month,x.year);
printf("%d/ %d/ %d",&y.day,y.month,y.year);
}
void finddays(date x,date y)
{



int main()
{
date d1,d2;
readdate(d1,d2);
Printdate(d1,d2);
return 0;
}


