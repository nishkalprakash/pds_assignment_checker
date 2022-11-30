/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 2
DESCRIPTION: sum of digits

*/
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,sum=0,c,d;
printf("enter your number:\n");
scanf("%d",&a);// input the number 
if(a>=0){       // using if else 
do{
b=a%10;
sum=sum+b;      // using do while loop
c=a/10;
a=c;
}
while(c!=0);
printf("the sum of the digits is %d\n",sum); // printing the sum

}
if(a<0){    // using if else

d=a*(-1);
do{
b=d%10;           // using do while loop
sum=sum+b*(-1);
c=d/10;
d=c;
}
while(c!=0);


printf("the sum of the digits is %d\n",sum);   // printing the sum
}
return 0;
}

