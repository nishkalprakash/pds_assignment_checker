/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 5
Description : array program
*/
#include<stdio.h>
int main()
{
int n,count=0,bin,max=0,min=0;
printf("enter size of array or number of elements ");
scanf("%d",&n);
printf("enter number of bins ");
scanf("%d",&bin);
int a[n];
printf("Enter numbers \n");
      for(int i=0;i<n;i++)
      {
	scanf("%d",&a[i]);
	if(a[i]>max)
	{
	max=a[i];
	}
	if(a[i]<min)
	{
	min=a[i];
	}
      }
float interval ;
interval=((float)(max-min+1)/(bin));
      for(int i=1;i<=bin;i++)
      {
	printf("bin %d- ",i);
         for(int j=0;j<n;j++)
         {
          if((a[j]>((min)+(i-1)*interval))&&(a[j]<=((min)+(i)*interval)))
          {
        	printf("%d ",a[j]);
	        count++;
          }
        }
      printf("elements=%d\n",count);
      count=0;
    }
 return 0;
}
