#include<stdio.h>

int main()
{
   int n1,S1;
   printf("Enter a number = ");
   scanf("%d",&n1);
   
   S1 = n1*(n1+1)/2;     // main logic
   printf("The sum of n numbers is %d\n",S1);
   
   // S1 progam is over
   
   int n2,S2;
   printf("Enter a number = ");
   //scanf("%d",&n2);
   
   S2 = n1*(n1 + 1)*(2*n1 + 1)/6;   // main logic
   printf("S2 is %d\n",S2);
   
   // S2 progam is over
   
    int x,y,z;
    int S3;
   printf("Enter a number = ");
   //scanf("%d%d%d",&x,&y,&z);
    
   S3 = x + y + z;
   printf("S3 is %d\n",S3);
   
   
   
   
   
   return 0;
    



}

