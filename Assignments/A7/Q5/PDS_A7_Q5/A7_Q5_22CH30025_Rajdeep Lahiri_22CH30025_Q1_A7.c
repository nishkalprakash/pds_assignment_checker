/*Name - Rajdeep Lahiri
Roll no - 22CH30025
Assignment number - 7
Description -*/

#include <stdio.h>
int main()
{
printf("Enter the number of elements in the array:\n");//input for the array lenght
int n,order=0,notorder=0;
scanf("%d",&n);//input for array length
int arr[n];
int i,j,k;
printf("enter the elements in the array\n");
for(i=0;i<n;i++)//input for the array elements
{
	scanf("%d",&arr[i]);
}
int rightcount=0,leftcount=0;/*variables to count how many eleents to the left and right are greater or smaller than the current index*/
for(i=1;i<n-1;i++)
{
	leftcount = 0,rightcount = 0;
	for(j=0;j<i;j++)//loop runs from first index to current index-1
	{
		if(arr[i]>arr[j])//check whether the element to the left is smaller than current index
		leftcount++;
	}
	for(k=i+1;k<n;k++)//loop runs from current+1 to last index
	{
		if(arr[i]<arr[k])//check whether element to the right is larger than current index
		rightcount++;
	}
	if(leftcount==i&&rightcount==n-i-1)
	order++;
	else
	notorder++;
}
printf("the number of elements out of order is %d",notorder);

return 0;
}

