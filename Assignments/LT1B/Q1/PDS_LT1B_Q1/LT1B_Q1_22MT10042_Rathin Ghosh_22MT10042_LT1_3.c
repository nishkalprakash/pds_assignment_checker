/*
Name: Rathin Ghosh
Roll no. : 22MT10042
Lab Test - 1 (Set B)
The program prints all the armstrong number till an upper limit taken as input from the user.
*/
#include<stdio.h>
#include<math.h>
int main()
{ 
   int n,i;
   printf("Enter the upper limit of the range of Armstrong numbers : "); // takes input from user
   scanf("%d",&n);
   if(n>0)
   {
      printf("The list of Armstrong numbers in the given range is :\n ");
      for(i=1;i<=n;i++)
      {
         if (i==calc(i))              // checks the armstrong number condition
         printf("%d\n",i);            // prints the armstrong numbers
      }
   }
   else
      printf("Invalid input");
   return 0;
}
int calc(int a)                   // function to calculate the sum of the digits raised to the power of no. of digits
{
   int k=a,c=0,s=0,j=a,r=0;
   while(k!=0)
   {
      c++;
      k/=10;
   }
   while(j!=0)
   {
      r=j%10;
      s=s+pow(r,c);
      j=j/10;
   }
   return s;                   //returns the value of the sum
}
