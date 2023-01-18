//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
struct date{
     int DD;
     int MM;
     int YYYY;
};
struct date readdate(struct date *x)
{printf("enter the values of day month and year:");
 scanf("%d %d %d",&x->DD,&x->MM,&x->YYYY);
 return *x;}
void printdate(struct date x)
{
  printf("%d/%d/%d\n",x.DD,x.MM,x.YYYY);
}
void finddays(struct date x,struct date y)
{
 int days,p;
 days=(y.YYYY-x.YYYY)*365+(y.MM-x.MM)*31+(y.DD-x.DD)*1;
 printf("days=%d\n",days);
}

int main()
{
 struct date x,y;
 x=readdate(&x);
 y=readdate(&y);
 printdate(x);
 printdate(y);
 finddays(x,y);
return 0;
}
