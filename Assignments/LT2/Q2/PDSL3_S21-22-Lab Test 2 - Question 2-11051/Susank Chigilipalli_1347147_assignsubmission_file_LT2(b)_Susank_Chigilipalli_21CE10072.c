/*This program is to do a program to find max Alpha value of given series*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : test 2
  question 2*/
#include<stdio.h>
void main()
{
   int n,i,j,tc=0,fc=0;
   printf("Enter number of elements you want to enter : ");
   scanf("%d",&n);
   int N[n];
   printf("Enter %d elements one by one : ",n);
   for(i=0;i<n;i++)scanf("%d",&N[i]);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(i>j)
         {
            if(N[j]%N[i]==0)
            tc++;
         }
      }
      if(tc>=fc)
      fc=tc;
      tc=0;
   }
   printf("Alpha value is : %d\n",fc);
}
