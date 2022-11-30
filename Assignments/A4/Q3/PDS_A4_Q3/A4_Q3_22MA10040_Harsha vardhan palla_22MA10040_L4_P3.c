/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:3program:to display the name of reverse number*/
#include<stdio.h>
int main()
{
long int num1;
int n;
scanf("%li",&num1);
if(num1==0)
printf("Zero");
while(num1!=0)
{ 
n=num1%10;
switch(n)
{ 
case 0:printf("Zero");
       break;
case 1:printf("one");
       break;
case 2:printf("Two");
       break;
case 3:printf("Three");
       break;
case 4:printf("Four");
       break;
case 5:printf("Five");
       break;
case 6:printf("Six");
       break;
case 7:printf("Seven");
       break;
case 8:printf("Eight");
       break;
case 9:printf("Nine");
       break;
}
num1/=10;
}

}


