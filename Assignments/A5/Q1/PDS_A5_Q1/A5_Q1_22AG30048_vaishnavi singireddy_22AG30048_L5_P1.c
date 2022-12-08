#include<stdio.h>
#include<math.h>
int pow(x,n);
int fact(int n);

int main()
{

int sum=1,i,x,n;


printf("enter two numbers");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)

sum=1+pow(x,n)/fact(n);
printf("sum is %d",sum);
return 0;
}



