/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 4
Description : Program to display the digits of the number in words in a reverse manner, e.g. input= 12 then output= Two one
*/

#include<stdio.h>
int main()
{
    int x,t;
    printf("Enter the integer having <= 10 digits : ");
    scanf("%d", &t);

while(t>0)
{
x=t%10;
switch(x)
{    
      case 1: printf("One ");
              break;
      case 2: printf("Two ");
              break;
      case 3: printf("Three ");
              break;
      case 4: printf("Four ");
              break;
      case 5: printf("Five ");
              break;
      case 6: printf("Six ");
              break;
      case 7: printf("Seven ");
              break;
      case 8: printf("Eight ");
              break;
      case 9: printf("Nine ");
              break;
      case 0: printf("Zero ");
              break;

}
t=t/10;
}

return 0;

}
