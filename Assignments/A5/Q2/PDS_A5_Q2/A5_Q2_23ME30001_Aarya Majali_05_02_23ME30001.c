//23ME30001
//AARYA MAJALI

#include <stdio.h>
#define size 50
#include <stdlib.h>
int main()
{
  int a[size],n,i,j,k;	
  printf("enter the number of integers you want");
  scanf("%d",&n);      // reading the number of integers the user wants
  for (i=0;i<n;i++)  
    {
      a[i]=(rand()%40)+10;   //reading random integers from [10,50]
    }
  for (i=0;i<n;i++)
    {
      printf("the values stored in the array are %d\n",a[i]);  //printing the array
    }
  for (i=0;i<n;i++)
    {
      for (j=0;j<n;j++)
        {
          for (k=0;k<n;k++)
             {
              if (a[i]+a[j]+a[k]==60)   //check for values adding up to 60
	      {
               printf("the values in the array adding up to 60 are %d%d%d",a[i],a[j],a[k]);
	       printf("the indices of these values are %d%d%d",i,j,k);
	      }     //printing their values and indices if they add up to 60
             }
        }
      
    }
  return 0;
}
  
  
