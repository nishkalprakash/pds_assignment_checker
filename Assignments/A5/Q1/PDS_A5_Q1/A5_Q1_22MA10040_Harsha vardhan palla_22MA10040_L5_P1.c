/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:5 assignment no:1 program:to display the expansion*/
#include<stdio.h>
int power(int,int);
int(power(int a,int b))
{
int power=a,n=1;
while(n<b)
{
power=power*a;
n++;
}
return power;
}
int fact(int);
int fact(int a)
{
  int factorial=1;
 for(int i=1;i<=a;i++)
{
 factorial=factorial*i;
}
return factorial;
}
int main()
{
int x,n,i;
float output=1;
scanf("%d%d",&x,&n);
for(i=1;i<n;i++)
{
 output=output+(power(x,i)/(fact(i)*1.0));
}
printf("%f",output);
}


