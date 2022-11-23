/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 3
 Description : Print the value of two digit integer in words
*/

#include <stdio.h>
#include <math.h>

int main(){
   int m,s,o;
   //taking input form the user

   printf("Enter the integer:");
   scanf("%d",&m);
   s=m/10;
   o=m%10;
   switch(s){
   case 2:
        printf("twenty ");
        break;
   case 3:
        printf("thirty ");
        break;
   case 4:
        printf("fourty ");
        break;
   case 5:
        printf("fifty ");
        break;
   case 6:
        printf("sixty ");
        break;
   case 7:
        printf("seventy ");
        break;
   case 8:
        printf("eighty ");
        break;
   case 9:
        printf("ninety ");
        break;
   }
   switch(o){
   case 0:
        break;
   case 1:
        printf("one\n");
        break;
   case 2:
        printf("two\n");
        break;
   case 3:
        printf("three\n");
        break;
   case 4:
        printf("four\n");
        break;
   case 5:
        printf("five\n");
        break;
   case 6:
        printf("six\n");
        break;
   case 7:
        printf("seven\n");
        break;
   case 8:
        printf("eight\n");
        break;
   case 9:
        printf("nine\n");
        break;
   }
}
