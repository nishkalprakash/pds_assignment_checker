/*program to compute the sume of n natural number
and their square of the numbers*/
//code creator:sachin

#include<stdio.h>
int main()
{
int a, s1, s2,s3,x,y,z ;
printf("natural number between 99 and 1000");
scanf("%d",&a);
s1 = a * (a+1) * 0.5; //using formula of sum of natural number;
s2 =(a * (a=1) * ((2 * a) + 1))/6;//using math formula of square of n natural number;
x = (a % 10);//using modulus function to obtained the reamainder;
y = (a /10) - x;
z = a/100;
s3 = x + y + z;
printf("the value of s1, s2, s3 respectively are %d, %d, %d\n",s1 ,s2 ,s3);
printf("s1, s2, s3", x ,y ,z);
return 0;
}