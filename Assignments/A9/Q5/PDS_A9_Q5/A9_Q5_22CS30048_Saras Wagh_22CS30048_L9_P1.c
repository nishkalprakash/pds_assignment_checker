#include<stdio.h>
struct Date
{
 int DD;
 int MM;
 int YYYY;
};
struct Date ReadDate(struct Date X)
{
 printf("Enter the date in DD MM YYYY format");
 scanf("%d %d %d",&X.DD,&X.MM,&X.YYYY);
 return X;
};
void PrintDate(struct Date X)
{
 printf("%d %d %d\n",X.DD,X.MM,X.YYYY);
};
void FindDays(struct Date X,struct Date Y)
{
 int a,n=0,sum1=0,sum2=0,sum=0;
 a=X.YYYY;
 while(a!=Y.YYYY)
 {
  if(a%100==0)
  {
   if(a%400==0)
   n++;
  }
  else
  {
   if(a%4==0)
   n++;
  } 
 a++;
 }
 sum+=(Y.YYYY-X.YYYY)*(365)+n;
 sum1=X.DD;
 sum2=Y.DD;
 switch(X.MM)
 {
  case 12:
  sum1+=30;
  break;
  case 11:
  sum1+=31;break;
  case 10:sum1+=30;break;
  case 9:sum1+=31;break;
  case 8:sum1+=31;break;
  case 7:sum1+=30;break;
  case 6:sum1+=31;break;
  case 5:sum1+=30;break;
  case 4:sum1+=31;break;
  case 3:sum1+=28;break;
  case 2:sum1+=31;break;
  default:
  sum1=X.DD;
 }
 switch(Y.MM)
 {
  case 12:
  sum2+=30;
  break;
  case 11:
  sum2+=31;break;
  case 10:sum2+=30;break;
  case 9:sum2+=31;break;
  case 8:sum2+=31;break;
  case 7:sum2+=30;break;
  case 6:sum2+=31;break;
  case 5:sum2+=30;break;
  case 4:sum2+=31;break;
  case 3:sum2+=28;break;
  case 2:sum2+=31;break;
  default:
  sum2=Y.DD;
 }
 if(sum1>sum2)
 sum+=sum1-sum2;
 else
 sum+=sum2-sum1;
 printf("Days=%d",sum);
}
int main()
{
 struct Date X,Y;
 
 X=ReadDate(X);
 Y=ReadDate(Y);
 printf("X=");
 printf("Y=");
 PrintDate(X);
 PrintDate(Y);
 FindDays(X,Y);
 
 return 0;





}


