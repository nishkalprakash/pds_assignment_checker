#include <stdio.h>
int main()
{
int num,num1;
printf("Enter a number :");
int i,d,sum = 0;
scanf("%d",&num);

while(num!=0){
if (num>0){
d = num%10;
sum = sum + d;
num=num/10;
}
if(num<0){
num1=num*(-1);
d = num1%10;
sum = sum + d;
num=num1/10;
}
}
if(num>0)
printf("the sum of digits of the number is %d",sum);
else
printf("the sum of digits of the number is %d",(-1)*sum);
return 0;
}
