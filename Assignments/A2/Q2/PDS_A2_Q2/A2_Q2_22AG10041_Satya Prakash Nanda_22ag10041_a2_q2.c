#include<stdio.h>
int main()
{
 int no1;
 float no2;
 char ch;
 printf("enter any number:\n");
 scanf("%2d",&no1);
 printf("enter any character:");
 scanf(" %d",&ch);
 printf("enter any floating number:\n");
 scanf("%f",&no2);
 printf("the entered values are %2d %d %f", no1,ch,no2);


 return 0;
}
