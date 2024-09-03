#include <stdio.h>
int main()
{
 int n,g[100],i=0;
 printf("enter value of n");
 scanf("%d",&n);
 if (n>100)
 	{printf("invalid");}
 else 	
 	{printf("enter value of array");
 	while (i<n)
		{scanf("%d",&g[i]);
		printf("%d",g[i]);
		i=i+1;}}
					
	
		
			
		
return 0;	
