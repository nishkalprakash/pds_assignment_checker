#include<stdio.h>
int main()
 {
     int n,max1,max2,i;
      for(i=0;;i++)
      {
      if(i==0)
      {
      printf("enter positive integer number:\n");
      scanf("%d",&n);
      max1=n;
      printf("Largest number:%d \n",max1);
      printf("second largest number: value not entered yet \n");
      }
      else if(i==1)
      {
      printf("enter positive integer number:\n");
      scanf("%d",&n);
      if(max1>n);
      {
      max2=n;
      printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
      
      }
      else if(max1==n)
      {
      printf("Largest number:%d \n",max1);
      printf("second largest number: value not entered yet \n");
      }
      else(max1<n)
      {
       max2=max1;
       max1=n;
       printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
      }
     }           
     else
     {
      printf("enter positive integer number:\n");
      scanf("%d",&n);
      if(max1>n);
      {
      
      if(max2>n)
      {
      max2=n;
      printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
      }
      else
      {
      
      printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
       
      }
      }
      else if(max1==n)
      {
      printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
      
      }
      else(max1<n)
      {
       max2=max1;
       max1=n;
       printf("Largest number:%d \n",max1);
      printf("second largest number:%d \n",max2 );
     }
     }           
     }
     } 
     
