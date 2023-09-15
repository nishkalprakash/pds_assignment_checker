#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,k,l,n;
  int  a[50];
  printf("Enter the value of number of random numbers to be generated \n");
  scanf("%d",&n);
  if (n>50)
    printf("Prog terminated because n>50 \n");
  else
    {
    
      for (i=0;i<n;i++)
	{
	  a[i]=(rand()%51)+10;
	  printf("arr[%d]=%d \n",i,a[i]);
	}

	  
	  for (j=0 ; j <n ; j++)
	    {for (k=j+1 ; k <n ; k++)
		{for (l=k+1 ; l <n ; l++)
	    {
		 if (a[j]+a[k]+a[l]==60)
		   printf("Array indices & the values which add upto 60 are :(%d,%d) ,(%d,%d),(%d,%d) \n",j,a[j],k,a[k],l,a[l]);
		   
	    }
	    }
	    }

	}
    

		 
      
     

  
  return 0 ;
}
