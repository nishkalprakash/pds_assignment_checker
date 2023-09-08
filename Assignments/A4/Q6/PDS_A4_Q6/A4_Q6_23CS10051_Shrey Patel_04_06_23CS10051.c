//Shrey G Patel
//23Cs10051
#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,sum,min=100;
for(int i=0;i<20;i++)
{
sum=0;
x=rand()%999+5001;
printf("No.=%d \t",x);
while(x>0)
{sum=sum+x%10;
x=x/10;}
printf("sum=%d\n",sum);
if(min>sum)
min=sum;
}
printf("The min sum is %d\n",min);
return 0;
}
