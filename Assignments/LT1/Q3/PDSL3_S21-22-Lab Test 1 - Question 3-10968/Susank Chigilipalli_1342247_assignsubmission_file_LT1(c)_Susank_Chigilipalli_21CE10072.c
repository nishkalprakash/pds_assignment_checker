/*This program is to find who wins the game*/
/*Name : Susank Chigilipalli(21CE10072)
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
   srand(time(0));
   int nr=0,i,an,bn,num,j=0,k=0,temp1,temp2,sum1=0,sum2=0,a=0,b=0;
   printf("Please enter number of rounds : ");
   scanf("%d",&nr);
   for(i=1;i<=nr;i++)
   {
      printf("Round-%d -->  ",i);
      num = (rand() % (1000 - 5 + 1)) + 5;
      an=num;
      num = (rand() % (1000 - 5 + 1)) + 5;
      bn=num;
      printf("A's number: %d",an);
      printf("     B's number: %d\n",bn);
      temp1=an;
      temp2=bn;
      while(an!=0)
      {
         an=an/10;
         j++;
      }
      while(bn!=0)
      {
         bn=bn/10;
         k++;
      }
      if(j==k)
      {
         while(temp1!=0)
         {
            sum1=sum1+temp1%10;
            temp1=temp1/10;
         }
         while(temp2!=0)
         {
            sum2=sum2+temp2%10;
            temp2=temp2/10;
         }
         if(temp1>temp2)
         {
            printf("             A's point: %d",sum1);
            printf("     B’s point: %d\n",sum2);
            printf("             A's badge: 1     B's badge: 0\n");
            printf("             -- A wins Round %d --",i);
            a=a+sum1;
         }
         else
         {
            printf("             A's point: %d",sum1);
            printf("     B’s point: %d\n",sum2);
            printf("             A's badge: 0     B's badge: 1\n");
            printf("             -- B wins Round %d --\n",i);
            b=b+sum2;
         }
      }
      else if(j>k)
      {
          printf("             A's point: %d",j);
          printf("     B’s point: %d\n",k);
          printf("             A's badge: 1     B's badge: 0\n");
          printf("             -- A wins Round %d --\n",i);
          a=a+j;
      }
      else
      {
          printf("             A's point: %d",j);
          printf("     B’s point: %d\n",k);
          printf("             A's badge: 0     B's badge: 1\n");
          printf("             -- B wins Round %d --\n",i);
          b=b+k;
      }
      j=0;
      k=0;
      sum1=0;
      sum2=0;
      }
      printf("Final result => A's total score: %d, B's total score: %d\n",a,b);
      if(a>b)
      printf("             --- A wins the game ---");
      else
      printf("             --- B wins the game ---");
}
