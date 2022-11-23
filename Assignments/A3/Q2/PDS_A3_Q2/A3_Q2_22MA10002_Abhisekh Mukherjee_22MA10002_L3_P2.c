/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3 
DESCRIPTION: printing a two digit number*/
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("enter the two digit number which is in between 20 and 99:\n");
scanf("%d",&a);
b=a/10;
c=a%10;
switch(b){
case 2 :printf("twenty ");
        break;
case 3 :printf("thirty ");
        break;
case 4 :printf("forty ");
        break;
case 5 :printf("fifty ");
        break;
case 6 :printf("sixty ");
        break;
case 7 :printf("seventy ");
        break;
case 8 :printf("eightty ");
        break;
case 9 :printf("ninety ");
        break;
default:printf("please check your number\n");
}
switch(c){
case 1:printf("one\n");
       break;
case 2 :printf("two\n");
        break;
case 3 :printf("three\n");
        break;
case 4 :printf("four\n");
        break;
case 5 :printf("five\n");
        break;
case 6 :printf("six\n");
        break;
case 7 :printf("seven\n");
        break;
case 8 :printf("eight\n");
        break;
case 9 :printf("nine\n");
        break;
default:printf("please check your number\n");
}
return 0;
}




