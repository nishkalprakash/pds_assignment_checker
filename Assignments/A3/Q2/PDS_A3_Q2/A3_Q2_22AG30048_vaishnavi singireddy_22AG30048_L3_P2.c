#include<stdio.h>
int main()
{
   int XY;
   printf("read a two digit integer between 20 to 99");
   scanf("%d",&XY);
   switch(20<=XY && XY<=99)
   {
     case 20 : printf("twenty");
               break;
     case 22 : printf("twenty two");
               break;
     case 21 : printf("twenty one");
               break;
     case 33: printf("thirty three");
               break;
    }
   return 0;
}
