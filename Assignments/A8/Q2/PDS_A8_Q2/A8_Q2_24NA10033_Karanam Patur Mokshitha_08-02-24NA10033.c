#include<stdio.h>
int main(){
int n,A[100];
int min,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements of the array in the 	range[-10^5,10^]:\n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&A[i]);
		}
	min=A[0];
	for(i=0;i<n;i++)
	{
	  for(int j=i+1;j<n;j++)
	  {
	     if(A[j]<A[i])
	     {
	     int temp=A[i];
	     A[i]=A[j];
	     A[j]=temp;
	     }
	   }
	  }
	  printf("Sorted Array:["%d", ]",A[]);
	  printf("Enter integer m to be inserted:");
	  scanf("%d",&m);
	  //if(m<A[0])
	  //{
	  
	 return 0;
	 }
	    
		

