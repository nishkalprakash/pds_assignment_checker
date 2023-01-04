/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 7

Description-finding out of order elements
*/
#include <stdio.h>
int main()
{
	int m,n,temp=0,count=0;
	printf("Enter Array Size 0<n<10 \n");//Array's size
	scanf("%d",&n);
	int a[10];
	printf("Enter Array Elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]<a[j])
			temp=1;
		}
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			temp=1;
		}
		if(temp==1)
		count++;//counting elements that are out of order
		temp=0;
	}
	printf("Out of Order: %d",count);//printing out of order elemets
	return 0;
}
