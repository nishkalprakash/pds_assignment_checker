/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 8
Program to find saddle point in a 2D array 
*/
#include<stdio.h>
int main()
   {
     int a[5][5];
     int i,j,r,c,p,q,flag=0,max,min;
     printf("Enter the shape of the array\n");
     scanf("%d,%d",&r,&c);
     printf("Enter the array elements\n");
     for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
             scanf("%d",&a[i][j]);
        }
     for(i=0;i<r;i++)
        {
          for(j=0;j<c;j++)
             {
               max=min=a[i][j];     // Fetching each element    
               for(p=0;p<c;p++)
                  {
                    if(a[i][p]<min)      //Finding minimum in row
                      min=a[i][p];
                   }
               for(q=0;q<r;q++)
                  {
                     if(a[q][j]>max)     // Finding maximum in column
                       max=a[q][j];
                   }
               if(max==min)             // Checking saddle
                 {
                   printf("The saddle point is %d \n",a[i][j]);
                   flag=1;
                 }
              }
          }
      if(flag==0)
        printf("There is no saddle point in this 2D array\n");
      return 0;
    }
