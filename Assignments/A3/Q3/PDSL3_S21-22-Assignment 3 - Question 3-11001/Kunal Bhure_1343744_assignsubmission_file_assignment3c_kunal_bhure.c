#include<stdio.h>
int main()
{
int a1,a2,a3,b1,b2,b3,c1,c2,c3;
printf("Line 1 :");
scanf("%d%d%d",&a1,&b1,&c1);

printf("Line 2 :");
scanf("%d%d%d",&a2,&b2,&c2);

printf("Line 3 :");
scanf("%d%d%d",&a3,&b3,&c3);
printf("%d",pint(a1,a2,b1,b2,c1,c2));

}
int pint(int a1,int a2,int b1,int b2,int c1,int c2 )
{
    int x,y,a[2]={x,y};
x=(c1*b2-c2*b1)/(a1*b2-a2*b1);
y=(c1-a1*x)/b1;

return a[0],a[1];}



