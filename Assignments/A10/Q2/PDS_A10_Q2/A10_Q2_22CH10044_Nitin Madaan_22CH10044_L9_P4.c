#include<stdio.h>
#include<stdlib.h>

 void printDate( int x,int y,int z)
{
  printf("%d/%d/%d\n",x,y,z);
 return ;
}

void FindDays(int x1,int y1,int z1,int x2,int y2,int z2)
{
  int sum=0,p,a;
 int sum1=0;
  switch (y1)
{
  case 12 : sum+=30;
  case 11: sum+=31;
  case 10:sum+=30;
  case 9: sum=31;
  case 8: sum+=31;
  case 7:sum+=30;
  case 6: sum=31;
  case 5: sum+=30;
  case 4:sum+=31;
  case 3: sum=28;
  case 2: sum+=31;
  
}
sum = sum+x1;// x1 is date of x

switch (y2)
{
  
  case 12 : sum1+=30;
  case 11 : sum1+=31;
  case 10: sum1+=30;
  case 9: sum1+=31;
  case 8: sum1+=31;
  case 7: sum1+=30;
  case 6: sum1+=31;
  case 5: sum1+=30;
  case 4:sum1+=31;
  case 3: sum1+=28;
  case 2: sum1+=31;
 
}
sum1= sum1+x2;// x2 is date of Y
int Q= z2-z1;//z1 year of X,z2 year of Y

if(sum1>sum)
{
   p=sum1-sum;
}
 else 
p=sum-sum1;


if(y1>2)
{
  sum-=1;
}

int days = p+Q*365;

while(z1!=z2)//counting leap year
{
  if(z1%100==0)
 {
   if(z1%400==0)
 

   a=0;
   a = a+1;
}

else
{
  if(z1%4==0)

  a++;
}
y1++;
}


days = days+a;
printf("Days = %d",days);


}

typedef struct Date{
  int Day; 
  int Month;
  int Year;
} Date;
 
int main()
{
   Date D1,D2;
  printf("Enter the Date D1:-\n");
 scanf("%d %d %d",&D1.Day,&D1.Month,&D1.Year);
 printf("Enter the Date D2:-\n");
 scanf("%d %d %d",&D2.Day,&D2.Month,&D2.Year);
printDate(D1.Day,D1.Month,D1.Year);
printDate(D2.Day,D2.Month,D2.Year);
FindDays(D1.Day,D1.Month,D1.Year,D2.Day,D2.Month,D2.Year);
return 0;
}
