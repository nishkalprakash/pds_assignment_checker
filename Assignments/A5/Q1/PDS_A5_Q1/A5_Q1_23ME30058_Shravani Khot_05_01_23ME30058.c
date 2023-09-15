#include <stdio.h>
#include <stdlib.h>

int main()
{
  int j,n,i,k,temp;
  int  a[50];
  printf("Enter the value of number of random numbers to be generated \n");
  scanf("%d",&n);
  if (n>50)
    printf("Prog terminated because n>50 \n");
  else
    {
    
      for (i=0;i<n;i++)
	{
	  a[i]=(rand()%91)+10;
      
      printf("The array content %d is %d \n",i,a[i]);
	}

      printf("The new array after interchange is \n");

     for(j=0;j<n;j++)
       {
	if ((j%2==0)&&(a[j]>a[j+2]))
	  {
	    temp=a[j];
	    a[j]=a[j+2];
	    a[j+2]=temp;
	  }
	printf("The array content %d is %d \n",j,a[j]);}
	
}
  
  return 0 ;
}
  
	
  
