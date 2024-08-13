#include<stdio.h>

int main()
{
   int n1,S1;
   printf("Enter a number=");
   scanf("%d",&n1);
   
   S1 = n1*(n1+1)/2;   
   printf("The sum of n number is %d\n",S1);
   

   
   int n2,S2;
   printf("Enter a number = ");
   scanf("%d",&n2);
   
   S2 = n2*(n2 + 1)*(2*n2 + 1)/6;
   printf("s2 is %d\n",S2);
  
  
   
   char X,Y,Z;
   int S3;
   printf("Enter a number =");
   scanf("%c%c%c",&X,&Y,&Z);
   
   S3= X+Y+Z;
   printf("S3 is %d\n",S3);
   return 0;
   
   }
