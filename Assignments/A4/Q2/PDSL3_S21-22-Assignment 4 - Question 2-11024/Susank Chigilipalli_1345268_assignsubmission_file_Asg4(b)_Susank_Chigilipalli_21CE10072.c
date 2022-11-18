/*This program is to find number of trips*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment 4
  question 2*/
#include<stdio.h>
const int K;
int count=0,c1=1;
int myHostelChangingTrips(int k,int i,int n,int m)
{
   int left=k,l,dif;
   if(c1<m)
   {
   if(i<=n)
   {
      if(left==0)
      {
         i=1;
         myHostelChangingTrips(K,i,n,m);
      }
      else
      {
         count++;
         l=k-m;
         if(l>0)
         {
            myHostelChangingTrips(l,i+1,n,m);
         }
         if(l<0&&l>=-6)
         {
            count++;
            myHostelChangingTrips(K,i,n,m);
         }
      }
   }
   if(i>n)
   {
     i=0;
     c1++;
     myHostelChangingTrips(K,i,n,m-1);
   }
   }
}
void main()
{
   int N,M,i=1;
   printf("Enter number of days you have to transfer all items : ");
   scanf("%d",&N);
   printf("Enter number of items you have : ");
   scanf("%d",&K);
   printf("Enter max number of items you can carry : ");
   scanf("%d",&M);
   myHostelChangingTrips(K,i,N,M);
   printf("Number of journeys : %d\n",count);
}
