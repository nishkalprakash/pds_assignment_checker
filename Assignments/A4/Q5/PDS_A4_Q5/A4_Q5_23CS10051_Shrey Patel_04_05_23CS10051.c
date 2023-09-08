//Shrey G Patel
//23CS10051
#include <stdio.h>
int main()
{
int n,i,sum=0,max=-1,max2=-1;
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
i=n%10;
n=n/10;
sum=sum+i;
if(max<i)
max=i;
if(max2<i && max>i)
max2=i;
}
printf("Sum of digits %d \n The max is %d and second largest is %d\n",sum,max,max2);
return 0;
}
