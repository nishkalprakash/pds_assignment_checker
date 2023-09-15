//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a[50],n,h;
    printf("Enter the number of numbers to be generated:\n");
    scanf("%d",&n);
    srand(time(NULL));
    for(int i=0;i<n;i++)
      {
	h=rand()%41+10;
	a[i]=h;
      }
    printf("The array contents:\n");
    for(int i=0;i<n;i++)
      {
	printf("index=%d value=%d\n",i,a[i]);
      }
    for(int i=0;i<n;i++)
      {
	for(int j=0;j<n;j++)
	  {
	    for(int k=0;k<n;k++)
	      {
		if(a[i]+a[j]+a[k]==60)
		  {
		    printf("Index of number 1:%d value of number 1:%d\n",i,a[i]);
		    printf("index of number 2:%d Value of number 2:%d\n",j,a[j]);
		    printf("Index of number 3:%d value of number 3:%d\n",k,a[k]);
		    printf ("\n\n");
		  }
	      }
	  }
      }
    return 0;
}
    
    
    
	
  
