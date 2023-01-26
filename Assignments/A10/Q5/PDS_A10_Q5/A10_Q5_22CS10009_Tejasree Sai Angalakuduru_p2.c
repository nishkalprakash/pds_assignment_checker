/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 9
 *Description   : date
 */

#include<stdio.h>

typedef struct{
 int d;
 int m;
 int y;
}date;

date readdate()
{
 date X;
 printf("Enter date :\n");
 scanf("%d %d %d",&X.d,&X.m,&X.y);
 return X;
}

void printdate(date X)
{
  printf(" : %2d/%2d/%d\n",X.d,X.m,X.y);
}

void finddays(date x ,date y)
{
 int n=0;
date t;
 if((x.d>y.d&&x.m==y.m&&x.y==y.y)||(x.d>y.d)||(x.m>y.m&&x.y==y.y))
  {
    t=x;
    x=y;
    y=t;
  }
 while(x.d!=y.d||x.m!=y.m||x.y!=y.y)
 {
   if(x.m==1||x.m==3||x.m==5||x.m==7||x.m==8||x.m==10||x.m==12)
   {
    if(x.d<=31)
     {
       n++;
       x.d++;
      }
    else
     {
        if(x.m>=12)
         {
           x.y++;
           x.d=01;
           x.m=01;
          }
         else
         {
           x.m++;
           x.d=01;
         }
      }
       
     }
    if(x.m==4||x.m==6||x.m==9||x.m==11)
   {
    if(x.d<=30)
     {
       n++;
       x.d++;
      }
    else
     {
       if(x.m<12)
        {
         x.m++;
         x.d=01;
        }
        else if(x.m>=12)
         {
           x.y++;
           x.d=01;
           x.m=01;
          }
       }
      }
    
     if(x.m==2&&(x.y%4==0))
   {
    if(x.d<=29)
     {
       n++;
       x.d++;
      }
    else
     {
       if(x.m<12)
        {
         x.m++;
         x.d=01;
        }
        else if(x.m>=12)
         {
           x.y++;
           x.d=01;
           x.m=01;
          }
       }
     }
      if(x.m==2&&x.y!=2020)
   {
    if(x.d<=28)
     {
       n++;
       x.d++;
      }
    else
     {
       if(x.m<12)
        {
         x.m++;
         x.d=01;
        }
        else if(x.m>=12)
         {
           x.y++;
           x.d=01;
           x.m=01;
          }
       }
     }
    }

printf("No.of days = %d",n); 
          



}

int main ()
{
 date X,Y;
 X=readdate();
 Y=readdate();
 printf("X");
 printdate(X);
 printf("Y");
 printdate(Y);
 finddays(X,Y);
return 0;
}
