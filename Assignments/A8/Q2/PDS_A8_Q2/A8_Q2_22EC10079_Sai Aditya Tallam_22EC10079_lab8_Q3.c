#include<stdio.h>

int main(){
	int arr[3][3];
	int max[3],min[3];
	for(int i=0;i<3;i++)
	{
	  for(int j=0;j<3;j++)
	  {
	    scanf("%d",&arr[i][j]);
	  }
	}
	int minm,maxm;
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	   {
	      minm=arr[i][0];
	      if(arr[i][j]<minm)
	      {
	        minm=arr[i][j];
	      }
	   }
	   min[i]=minm;
	   for(int j=0;j<3;j++)
	   {
	       maxm=arr[j][0];
	       if(arr[j][i]>maxm)
	       {
	         maxm=arr[j][i];
	       }
	   }
	   max[i]=maxm;
	}
	int n=0;
	for(int i=0;i<3;i++)
	{
	  for(int j=0;j<3;j++)
	  {
	   if(max[i]==min[j])
	   {
	     printf("%d is the saddle point ",max[i]);
	     n++;
	   }
	  }
	}
	if(n<1)
	{
	printf("there is no saddle point in this 2d array");
	}
	return 0;
}