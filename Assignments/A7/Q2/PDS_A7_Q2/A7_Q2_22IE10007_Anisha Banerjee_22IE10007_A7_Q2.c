/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 7
Program to find the elememts out of order
*/
#include<stdio.h>
int main()
   {
     int a[10];
     int n,i=0,m,j,k,flag=0,c=0;
     printf("Enter the size of the array\n");
     scanf("%d",&n);
     printf("Enter the array elements\n");
     for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++);
        {
          
          flag=0;
          for(j=0;j<i;j++)
             {
               if(a[j]>a[i])
                 flag=1;
              }
          for(k=i+1;k<n;k++)
             {
               if(a[k]<a[i])
                 flag=1;
              }
         if(flag==1)
           {
           c++;
           printf("Value of c is "%d",c);
          }
        }
    printf("Out of order: %d\n",c);
    return 0;
    }
