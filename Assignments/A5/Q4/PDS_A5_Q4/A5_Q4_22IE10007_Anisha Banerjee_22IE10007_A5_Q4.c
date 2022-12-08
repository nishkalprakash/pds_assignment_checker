/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 5
Program to make a guessing game
*/
#include <stdio.h>
int bran,n,max,min,b;
void classify(int i,int s[])
    {
      int ranu,ranl,count=0,j;
      ranl=min+(i-1)*bran;
      ranu=min+i*bran;
      printf("bin%d--> ",i);
      if ((i==b)&&(b>1))
         {
         ranu=max;
         for (j=0;j<n;j++)
         {
           if((s[j]>=ranl)&&(s[j]<=ranu))
             {
           printf("%d ",s[j]);
           count=count+1;
             }
        }
      
       }
   
      for (j=0;j<n;j++)
         {
           if((s[j]>=ranl)&&(s[j]<ranu))
             {
           printf("%d ",s[j]);
           count=count+1;
             }
        }
      printf("Elems = %d\n",count);
       }
 
int main()
   {
     int i,j,k;
     int a[20];
     printf("Enter the total number of elements\n");
     scanf("%d", &n);
     printf("Enter the array elements\n");
     for(i=0;i<n;i++)
        scanf("%d", &a[i]);
     printf("Enter the number of bins\n");
     scanf("%d", &b);
     max=a[0];
     min=a[0];
     for(j=0;j<n;j++)
        {
          if(a[j]>max)
            max=a[j];
          if(a[j]<min)
            min=a[j];
        }
      bran=(max-min+1)/b;   // To calculate the range of each bin
      for(k=1;k<=b;k++)
           classify(k,a);
       
      return 0;
     }
      
