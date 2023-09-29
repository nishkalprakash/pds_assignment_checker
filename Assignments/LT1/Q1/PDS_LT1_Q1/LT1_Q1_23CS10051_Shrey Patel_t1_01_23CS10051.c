//Shrey G Patel
//23CS10051
#include <stdio.h>
 int main()
{
int n,k=0,j[4],m,sum=0;
printf("Enter the number:");
scanf("%d",&n);
for(int i=n;i>0;i=i/10)
{
k++;
}

if(k==4)
{ for(int i=n,l=0;i>0;i=i/10,l++)
{j[l]=i%10+1;
if(j[l]==10)
sum=sum+1;
else
sum=sum+j[l];}
for(int i=3;i>=0;i--)
{printf("%d0",j[i]);
}
if(sum<10)
printf("00%d0",sum);
else
{
int y=sum%10,x=sum/10;
printf("%d0%d0",x,y);
}}
else if(k==3)
{ for(int i=n,l=0;i>0;i=i/10,l++)
{j[l]=i%10+1;
if(j[l]==10)
sum=sum+1;
else
sum=sum+j[l];}
for(int i=2;i>=0;i--)
{printf("%d0",j[i]);
}
if(sum<10)
printf("00%d0",sum);
else
{
int y=sum%10,x=sum/10;
printf("%d0%d0",x,y);
}}
else if(k==2)
{for(int i=n,l=0;i>0;i=i/10,l++)
{j[l]=i%10+1;
if(j[l]==10)
sum=sum+1;
else
sum=sum+j[l];}
for(int i=1;i>=0;i--)
printf("%d0",j[i]);
if(sum<10)
printf("00%d0",sum);
else
{
int y=sum%10,x=sum/10;
printf("%d0%d0",x,y);
}}
else if(k==1)
{m=n%10+1;
if(m==10)
sum=sum+1;
else
sum=sum+m;
printf("%d0",m);
if(sum<10)
printf("00%d0",sum);
else
{
int y=sum%10,x=sum/10;
printf("%d0%d0",x,y);
}}
return 0;
}



