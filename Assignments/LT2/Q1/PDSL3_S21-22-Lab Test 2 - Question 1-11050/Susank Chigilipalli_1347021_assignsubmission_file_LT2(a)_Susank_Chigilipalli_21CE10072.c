/*This program is to do a program to find max sum of contiguous elements*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : test 2
  question 1*/
#include<stdio.h>
void main()
{
   int n,i,j,k,maxsum=-2147483648,tempsum=0,p,q;
   printf("Enter number of elements you want to enter : ");
   scanf("%d",&n);
   int N[n];
   if(n>=1&&n<=20)
   {
      printf("Enter %d elements one by one : ",n);
      for(i=0;i<n;i++)scanf("%d",&N[i]);
      for(i=1;i<=n;i++)
      {
         for(k=0;k<n;k++)
         {
            for(j=1;j<=i;j++)
            {
               tempsum=tempsum+N[k+j-1];
            }
            if(tempsum>=maxsum)
            {
               maxsum=tempsum;
               p=k;
               q=k+j-1;
            }
            tempsum=0;
         }
       }
    }
    printf("Largest sum : %d\n",maxsum);
    printf("Sub-arrays : ");
    for(i=p;i<=q;i++)printf("%d,",N[i]);
    printf("\n");
}

