/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:7
Question no:3
description:searching*/

#include <stdio.h>
int main()
{
	int i;
	int n;int m;
        int temp;//used in replacing of array elements
	printf("Enter no of elements:");
	scanf("%d",&n);//accept no elements
	int a[n];
        printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	int j;//loop control variable
        printf("Enter m:");
        scanf("%d",&m);
	int count=0;//counts no of elements
        int flag=0;
	for(i=0;i<n;i++)
	{
              if(a[i]==a[i-1])
              continue;//to avoid repitition of the same number
	      for(j=n-1;j>=0;j--)
	      {
	           if(a[j]==a[i])//check if the element is present
	           {count++;}
	      }
	      if(count==m)
	      {
               printf("%d ",a[i]);//printing the repeated elements
               flag=1;
              }
              count=0;
	}
        if (flag==0)
	printf("No numbers ");
        printf ("appears %d times\n",m);
	return 0;
}

