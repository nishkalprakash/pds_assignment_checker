/*SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 7

Description-Inserting element in sorted array
*/
#include <stdio.h>
int main()
{
	int m,n,k=0;
	printf("Enter Array Size\n");//Array's size
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements in ascending order\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be inserted\n");
	scanf("%d",&m);
	int b[n+1];	
	for(int i=0;i<n;i++)
	{
		b[k]=a[i]; //just copying the rest of the array
		if((i==(n-1))&&(a[i]<m))
		{
			b[n]=m;//inserting the element if its at the end
			break;
		}
		if((a[i]<m)&&(a[i+1]>=m))
		{
			k++;
			b[k]=m;//inserting the element if its in the middle
		}
		k++;
	}
	if(a[0]>m)
	{
		b[0]=m;//inserting if element its at the start
		for(int i=1;i<=n;i++)
		b[i]=a[i-1];
	}
	printf("Input Array\n");//printing input array
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nOutput Array\n");//printing output array
	for(int i=0;i<=n;i++)
	printf("%d ",b[i]);	
	printf("\n");
	return 0;
}

		
