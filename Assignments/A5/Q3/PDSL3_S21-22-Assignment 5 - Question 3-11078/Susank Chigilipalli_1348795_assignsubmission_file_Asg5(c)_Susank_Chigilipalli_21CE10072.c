/*This program is to find saddle points using 2D arrays*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : 5
  question : 3*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int m,n,i,j,**p,minr=0,maxr=-2147483648,mincmin=0,mincmax=0,k,mini,maxi,l1,l2;
   printf("Enter number of elements rows you want for an array : ");
   scanf("%d",&m);
   printf("Enter number of elements coloumns you want for an array : ");
   scanf("%d",&n);
   p=(int **)malloc(m*sizeof(int *));
   for(i=0;i<m;i++)
   {
      printf("Enter row elements of %d row : ",i);
      p[i]= (int *)malloc(n*sizeof (int));
      for(j=0;j<n;j++)
      {
         scanf("%d",&p[i][j]);
      }
   }
   for(i=0;i<m;i++)
   {
      mincmax=p[i][0];
      mincmin=p[i][0];
      minr=p[i][0];
      mini=0;
      maxi=0;
      for(j=0;j<n;j++)
      {
         if(p[i][j]<minr)
         {
            minr=p[i][j];
            mini=j;
         }
         if(p[i][j]>maxr)
         {
            maxr=p[i][j];
            maxi=j;
         }
         for(k=0;k<m;k++)
         {
            if(p[k][mini]<mincmin)
            {
               mincmin=p[k][mini];
               l1=k;
            }
            if(p[k][maxi]<mincmax)
            {
               mincmax=p[k][maxi];
               l2=k;
            }
         }
         if(mincmin==minr)
         {
            printf("Saddle point at a[%d][%d] = %d\n",l1,mini,mincmin);
         }
         if(mincmax==maxr)
         {
            printf("Saddle point at a[%d][%d] = %d\n",l2,maxi,mincmax);
         }
      }
   }
}







