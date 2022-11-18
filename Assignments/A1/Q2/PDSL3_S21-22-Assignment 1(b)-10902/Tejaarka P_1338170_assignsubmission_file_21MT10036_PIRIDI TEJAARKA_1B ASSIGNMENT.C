#include<stdio.h>


int main()

{
int x,digit1,digit2,digit3;



printf("enter the three digit number:\n");



scanf("%d",&x);


digit1=(x/100);


digit2=(x%100)/10;


digit3=(x%10);


 printf("reverse is %d%d%d\n",digit3,digit2,digit1);



return 0;


}
