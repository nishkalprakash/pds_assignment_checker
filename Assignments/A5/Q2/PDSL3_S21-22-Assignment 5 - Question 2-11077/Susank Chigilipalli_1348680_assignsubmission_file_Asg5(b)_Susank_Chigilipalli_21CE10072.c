/*This program is to arrange elements in bins using pointers and dynamic memory allocation*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : 5
  question : 2*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int *p,n,i,max=-2147483648,nb,*nbins,**q,j=0,k=0;
   float ran;
   printf("Enter number of elements you want to enter : ");
   scanf("%d",&n);
   p=(int *)malloc(n*sizeof(int));
   printf("Enter number of bins : ");
   scanf("%d",&nb);
   printf("Enter array elements : \n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&p[i]);
      if(p[i]>max)
      {
         max=p[i];
      }
   }
   ran=(float)max/nb;
   nbins=(int *)malloc(nb*sizeof(int));
   for(i=0;i<nb;i++)nbins[i]=0;
   for(j=0;j<nb;j++)
   {
   for(i=0;i<n;i++)
   {
      if(p[i]>=(j*ran)&&p[i]<=((j+1)*ran))
      {
         nbins[j]++;
      }
   }
   }
   q=(int **)malloc(nb*sizeof(int *));
   for(i=0;i<nb;i++)
   {
      q[i]=(int *)malloc(nbins[i]*sizeof(int));
   }
   for(j=0;j<nb;j++)
   {
   printf("Bin%d : ",j+1);
   for(i=0;i<n;i++)
   {
      if(p[i]>=(j*ran)&&p[i]<=((j+1)*ran))
      {
         q[j][k]=p[i];
         k++;
         printf("%d,",p[i]);
      }
   }
   printf("Number of elements in Bin%d : %d\n",j+1,k);
   k=0;
   }
}
