//ROLL NO.:23BT30019
//NAME: NAZEER ANWAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,j,k;
int array[50];
 printf("Enter the number of random numbers to be generated\n");
 scanf("%d",&n);

 for(i=0;i<n;i++)
   {
     array[i]=(rand() % 40)+10;
   }
 printf("array content\n");
  for(i=0;i<n;i++)
   {
     printf("%d\n",array[i]);
   }
 for(i=0;i<n;i++)
   {
      for(j=i;j<n;j++)
   {
      for(k=j;k<n;k++)
   {
     if((array[i]+array[j]+array[k])==60 && i!=j && j!=k && i!=k)
       {printf("indices %d,%d,%d add up to 60.And there values are %d,%d,%d respectively\n",i,j,k,array[i],array[j],array[k]);}
   }

   }

   }
}

 
