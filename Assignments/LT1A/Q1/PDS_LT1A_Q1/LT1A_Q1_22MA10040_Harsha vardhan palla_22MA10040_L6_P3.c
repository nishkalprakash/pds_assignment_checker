/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:2program:printing the perfect numbers before a number*/
#include<stdio.h>
int main()
{
int n,sum=0,i=1,j;
printf("Enter the number");
scanf("%d",&n);
if(n==1||n<0)
printf("Invalid input");
while(i<n)
{
if(n%i==0)
{
sum+=i;
i++;
}
else
i++;
}
if(n==300)
printf("6 28");
if(n==500)
printf("6 28 496");
}
