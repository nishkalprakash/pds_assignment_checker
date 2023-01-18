/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 9
description:printing number of days by taking day,month,year
*/

#include<stdio.h>

// defining the structure

typedef struct date
{ 
  int dd;
  int mm;
  int yy;
} date;

struct date x,y;

struct date readdate1()
{
 struct date x;
 printf("enter day,month,year");
 scanf("%d %d %d",&x.dd,&x.mm,&x.yy);
 return x;
}
 
struct date readdate2()
{
 struct date y;
 printf("enter day,month,year");
 scanf("%d %d %d",&y.dd,&y.mm,&y.yy);
 return y;
}
 
void printdate(struct date x)
{
 printf("x= %d/%d/%d \n",x.dd,x.mm,x.yy);
}

void printdate(struct date y)
{
 printf("y= %d/%d/%d \n",y.dd,y.mm,y.yy);
}

int day count(struct date x,struct date y)
{
 struct date n;
  int i;


}


int main()
{
 struct date x,y;
 x=readdate1();
 y=readdate2();
 printdate(x);
 printdate(y);

 return 0;
}
