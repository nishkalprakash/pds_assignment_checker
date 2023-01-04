/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 7
Description :A program to check how many times the number has been appeared.
*/


#include<stdio.h>



int main()
{
 int num[100];
 int n;
 printf("enter the numbers : ");
       for(int i=0; num[i] != 0; i++){
       scanf("%d",&num[i]);
     }
       printf("enter the number which has to be tested for its occurence : ");
       scanf("%d",&n);

       for(int i=0; num[i] != 0; i++){
           for(int i=0,j=0;num[j]= num[i];j++,i++){
               printf("%d has appeared %d times",num[j],n);
          }
      }
  

      return 0;
}

