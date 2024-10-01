//created by ashutosh singhal
//roll no-24NA10020
#include <stdio.h>
int power (int x,int n)
{
int i;
for (i=0;i<n;i++){
x=x*x;
return x;
}
}
int fact (int n)
{
int f,j;
f=1;
for(j=1;j<=n;j++)
{
f=f*j;
return f;
}
}
int main()
{
int n;
int x;
printf("enter the value of n \n ");
scanf("%d\n",&n);
printf("enter thr value of x \n ");
scanf("%d\n",&x);
int i; float sum;
printf("%d",power(x,n));


sum=0;
for(i=0;i<n;i++)
{ sum=sum+ (power(x,i))/ (float)fact(i);
}
printf("the sum of series is %f \n",sum);


return 0;
}



