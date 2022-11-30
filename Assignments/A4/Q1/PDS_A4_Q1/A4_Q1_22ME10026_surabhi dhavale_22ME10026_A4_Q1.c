/*
section14
roll no. 22ME10026
assignment4
*/

#include<stdio.h>

int main()
{

int num;
printf("enter the number");
scanf("%d", &num);
if(num==0){
printf("%d",num);
}
if(num<0){
num=0-num;
}
for(int i=1;i<=num;i++)

{
if (num%i==0)
printf("%d",i);

}

return 0;
}




