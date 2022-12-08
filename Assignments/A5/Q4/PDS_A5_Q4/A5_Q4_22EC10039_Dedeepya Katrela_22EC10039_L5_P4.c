//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>
int main()
{ int bins,a[N],N,r,i,min,max,j,b1[n1],b2[n2],b3[n3],b4[n4],b5[n5],b6[n6],b7[n7],b8[n8],b9[n9],b10[n10];

   printf("enter the value of N");
   scanf("%d",&N);
  for(i=0;i<N;i++)
  {printf("enter the value:");
   scanf("%d",&a[i]);}
  printf("enter the number of bins:");
  scanf("%d",&bins);
  min=a[0];
  max=a[9];
  for(i=0;i<N;i++)
  { if(a[i]<a[0])
    { min=a[i];}
   if(a[i]>a[9])
    {max=a[i];}
  }
printf("the numbers are in the range of[min,max]");
r=(max-min)/bins;
   for(j=1;j<=bins;j++)
    {for(i=0;i<N;i++)
     {if (a[i]>=min&&a[i]<=min+r)
       {bj[]=a[i];
      min=min+r;}
     }  
 return 0;       
    


}
