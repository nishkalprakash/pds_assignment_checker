/*This program is to perform searching*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
int linear_search(int m[20],int y)
{
   int i,ind;
   for(i=0;i<20;i++)
   {
     if(m[i]==y)
     ind=i;
     break;
   }
   if(ind>=0)return ind;
   else return -1;

}
int bin_search(int m[20],int y)
{
   int i, low, high, mid;
   low = 0;
   high = 19;
   mid = (low+high)/2;
   while (low <= high)
   {
     if(m[mid] < y)
     low = mid + 1;
     else if (m[mid] == y)
     {
     return mid+1;
     break;
     }
     else
     high = mid - 1;
     mid = (low + high)/2;
   }
   if(low > high)
   return -1;
}
void main()
{
   int n,i,ser[20],x,alg,lsi,bsi;
   printf("Enter the number of elements n :");
   scanf("%d",&n);
   printf("Enter the elements in sorted order : ");
   for(i=0;i<n;i++)scanf("%d",&ser[i]);
   printf("Enter the key element x, which you want to search : ");
   scanf("%d",&x);
   printf("Choose the algorithm: Type 1 for linear search and 2 for binary search : ");
   scanf("%d",&alg);
   if(alg==1)
   {
      lsi=linear_search(ser[n],x);
      if(lsi==-1)printf("Unsuccessful , number not found");
      else
      {printf("Successful\n");printf(" Index is : %d ",lsi);}
   }
   if(alg==2)
   {
      bsi=bin_search(ser[n],x);
      if(bsi==-1)printf("Unsuccessful , number not found");
      else
      {printf("Successful\n");printf(" Index is : %d ",bsi);}


   }
}
