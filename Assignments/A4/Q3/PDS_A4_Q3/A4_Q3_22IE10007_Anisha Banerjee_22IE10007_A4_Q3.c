/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to write the reverse number in words
*/
#include <stdio.h>
int main()
   {
    long int n;
    int m;
    printf("Enter the number\n");
    scanf("%ld",&n);
    if (n==0)
      printf("Zero");
     while (n!=0)
          {
           m=n%10;
           switch(m)
           {
              case 0:
               {
                 printf("Zero ");
                  break;
               }
              case 1:
                 {
                    printf("One ");
                    break;
                  }
              case 2:
                 {
                    printf("Two ");
                    break;
                 }
              case 3:
                {
                 printf("Three ");
                 break;
                 }
              case 4:
                 {
                   printf("Four ");
                   break;
                 }
              case 5:
                  {
                    printf("Five ");
                    break;
                  }
              case 6:
                 {
                  printf("Six ");
                  break;
                 }
              case 7:
                 {
                   printf("Seven ");
                   break;
                  }
              case 8:
                {
                  printf("Eight ");
                  break;
                }
              case 9:
                 {
                   printf("Nine ");
                   break;
                 }

               }

        n=n/10;
       }
    return 0;
}
