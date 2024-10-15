//pradyumna 24na10048
#include <stdio.h>
void bubble_sort (int *x, int size) {
int t,arr[101];
arr[101]= *x;
for (int i = 0; i < size; i++)		//bubble sort
	for (int j = 0; j < size-i-1; j++)
	if (arr[j] > arr[j+1]) {
		t = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = t;
			}
		}
int main()
{
 int n,arr[101],m,i=0;
 printf("enter the array size: ");
 scanf("%d",&n);
 printf("enter the array : ");
 for(i=0;i<n;i++)
 	{scanf("%d",&arr[i]);}		
 bubble_sort(&arr[101],n);
 for(i=0;i<n;i++)
 	{printf("%d, ",arr[i]);	}
 printf("enter the new value : ");
 scanf("%d",&m);
 for(i=0;i<n;i++)
 	{if (m<=arr[i])
 		{for(int j=i+1;j<n+1;j++)
 			{arr[i]=arr[i + 1];}}
 	else {break;}}	
 for(i=0;i<n+1;i++)
 	{printf("%d, ",arr[i]);	}
 	
 	
 		
 	
 	
 	
 	
 
}
