//23ME30001
//AARYA MAJALI


#include <stdio.h>
# define size 50
#include <stdlib.h>
int main()
{
  int a[size],n,i,change1,change2,change=0;
  printf("enter the number of integers you want");
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      a[i]=(rand()%90)+10;    //reading random integers
    }
  for (i=0;i<n;i++)
    {
      printf("the values stored in the array are %d\n",a[i]); //printing the original array
    }
  for (i=n;i<50;i++)
    {
      a[i]=0;
    }
  for(i=2;i<n;i+=2)
     { 
      change1=a[i];
      change2=a[i-2];
      if (a[i]<a[i-2])
	{
	  a[i-2]=change1;   //interchanging of elements
	  a[i]=change2;
	  change++;         //counting the number of interchanges
	}
     }
  printf("the number of interchanges made are %d\n",change);
  for (i=0;i<n;i++)
    {
      printf("the values stored in the new aaray are %d\n",a[i]);  //printing the new array
    }
  return 0;
}
  
      
      
  
  
      
      
