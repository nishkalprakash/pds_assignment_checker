/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 9
desciption: READING DATE AND CALCULATING DIFFERENCE
*/

#include<stdio.h>
typedef struct date
{
 int dd;
 int mm;
 int yy;
}
date;
struct date x, y;


struct date readdate1()
{
 struct date x;
 printf("Enter day, month, year: ");
 scanf("%d %d %d",&x.dd, &x.mm, &x.yy);
 return x;
}



struct date readdate2()
{
 struct date y;
 printf("Enter day, month, year: ");
 scanf("%d %d %d",&y.dd, &y.mm, &y.yy);
 return y;
}

void printdate1(struct date x)
{
 printf("x = %d/%d/%d \n", x.dd, x.mm, x.yy);
}

void printdate(struct date y)
{
 printf("y = %d/%d/%d \n", y.dd, y.mm, y.yy);
}

int day_comt(struct date x, struct date y)
{
struct date c;
int n;
if(y.yy>x.yy||x.yy=y.yy && x.mm<y.mm)
{ 
 c.yy= y.yy-x.yy;
 c.mm=y.mm-x.mm;
 c.dd= y.dd-x.dd;
}
else if (y.yy>x.yy||x.yy=y.yy && x.mm>y.mm)
{ 
 c.yy= x.yy-y.yy;
 c.mm=x.mm-y.mm;
 c.dd= x.dd-y.dd;
}

int main()
{
 struct date x, y;
 x = readdate1();
 y = readdate2();
 printdate1(x);
 printdate(y);
 day_comt(x,y);
printdate1(x);
 printdate(y);

}
