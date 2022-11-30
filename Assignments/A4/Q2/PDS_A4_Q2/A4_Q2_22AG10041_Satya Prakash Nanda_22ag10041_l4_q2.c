#include<stdio.h>
int main()
{
int num;
printf("enter any number:");
scanf("%d", &num);
int sum=0;
int a;
while(num!=0){

sum=sum+num%10;
num=num/10;
}
printf("sum of digits is %d\n", sum);

return 0;
}
