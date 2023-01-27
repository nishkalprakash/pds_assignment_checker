#include<stdio.h>
struct customer
{
long int an;
char name[100];
int b;
};
int main()
{
struct customer bk;
printf("enter the details of customer");
scanf("%d%s%d",&bk.an,bk.name,&bk.b);
printf("account number=%d,name=%s,balance=%d",bk.an,bk.name,bk.b);
}



