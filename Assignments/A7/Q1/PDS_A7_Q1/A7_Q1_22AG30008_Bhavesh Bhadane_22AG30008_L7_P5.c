#include<stdio.h>
int main()
{
	int i,n,m,temp,a[n];
	printf("Enter the input array size ");
	scanf("%d",&n);
	printf("Enter the elements which are sorted");
	for(i=0;i<n;i++)
	{   
		scanf("%d",&a[i]);
	}
 	for (i=0;i<n;i++)
 	{
 		printf("%d",a[i]);
 	}	
    printf("Enter the number to be inserted");
    scanf("%d",&m);
 
   /*	for(i=0;i<n+1;i++)
	{
		a[0]=m;
  	 if(a[i]<m)
  	 	{  
  	 		temp=a[i];
   	        a[i]=m;
   	        m=temp;

   		}
  	 
	}
        
	for(i=0;i<n+1;i++)
	{
		printf("%d",a[i]);
	}
 
 */
 return 0;
}







