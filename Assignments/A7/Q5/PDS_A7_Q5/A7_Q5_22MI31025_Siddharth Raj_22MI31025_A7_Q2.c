/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:7
Question no:2
description:order*/

#include <stdio.h>
int main()
{
        int i;
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);//accept no elements
        int a[n];
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	int j;//loop control variable
        int count=0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
               if(a[i]>a[j])
               {count++;
                break;
               }//counts no of out order elements
            }
            for(int k=0;k<i;k++)
            {
               if(a[i]<a[k])
               {
                  count++;//ocunt no of out of order elements
                  break;
               }
            }
         }
         printf("Out if order:%d",count);//printing the number
         return 0;
}
