#include<stdio.h>

int *ptr1,*ptr2;

/*int* Merge(int size1,int size2,*ptr1,*ptr2)
{
          
  	
}*/



int main()
{
 int sz1,sz2;
 printf("enter size of array 1\n");
 scanf("%d",&sz1);
 printf("enter size of array 2\n");
 scanf("%d",&sz2);
 int arr1[sz1];
 int arr2[sz2];
 printf("enter values of array 1\n");
 for(int i=0;i<sz1-1;i++)
 {
 	scanf("%d ",&arr1[i]);
 }
 printf("enter values of array 2\n");

 for(int j=0;j<sz2-1;j++)
 {
 	scanf("%d ",&arr2[j]);
 }

printf("output \n");
 int arr3[sz1+sz2];
    if(sz1>=sz2)
    {
 	for(int a=0;a<sz1-1;a++)
 	{
 		for(int b=0;b<sz2-1;b++)
 		{
 			if(arr1[a]>arr2[b])
 				{
                                 printf("%d\n",arr2[b]);
                                printf("%d\n",arr1[a]);
                               }
 			else
 				{
                                  printf("%d\n",arr1[a]);
                                   printf("%d\n",arr2[b]);
                                  break;
                                }
 		}
 	}
 }
 

 else if(sz1<sz2)
    {
 	for(int b=0;b<sz2-1;b++)
 	{
 		for(int a=0;a<sz1-1;a++)
 		{
 			if (arr2[b]>arr1[a])
 				{
                                  printf("%d\n",arr1[a]);
                                printf("%d\n",arr2[b]);
                                }
 			else
 				{
                                  printf("%d\n",arr2[b]);
                                  printf("%d\n",arr1[a]);
                                  break;
                                }
 		}
 	}
 }

 

}
