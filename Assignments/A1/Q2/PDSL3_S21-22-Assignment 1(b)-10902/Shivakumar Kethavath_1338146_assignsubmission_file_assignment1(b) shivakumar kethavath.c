/*kethavath shivakumar
 21MI31013*/

#include<stdio.h>
int main()
{
int a,num1,num2,num3;
printf("enter the 3 digit number\n");
scanf("%d",&a);
num1=a/100;
num2=(a%100)/10;
num3=(a%10);

printf("the reverse is %d%d%d\n",num3,num2,num1);
return 0;
}
