#include <stdio.h>
int main()
{
 int x;//to store positive integer
 char y;//to store typable character
 double z;//to store a large floating number
 printf("enter the positive integer:");
 scanf("%d",&x);//read integer
 printf("enter the  typable character:");
 scanf(" %c",&y);//read char
 printf("enter the long floating number:");
 scanf("%lf",&z);//read large floating number
 printf("the positive integer:%d \n",x);//print integer
 printf("the  typable character:%c \n",y);//print char
 printf("enter the long floating number:%.3e \n",z);//print long float
 return 0;
}
