#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
printf("enter 5 numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a%b==1 || a%c==1 || a%d==1 ||a%e==1)
{
printf("coprime");
}
else
{
printf("no coprime found");
}
return 0;
}

