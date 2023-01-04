#include <stdio.h>
void main()
{
int l,i;
printf("enter the lenght of the array\n");
scanf("%d",&l);//input for array length
int arr[l];
printf("enter the elements\n");
for(i=0;i<l;i++)
	scanf("%d",&arr[i]);//input for array elements
int newarr[l+1],count=0;
printf("enter the elelent to be inserted\n");
printf("\n");
int m;//element to be inserted
scanf("%d",&m);//input for element
for(i=0;i<l+1;i++)
{
	if(arr[count]<=m)//checking if the elements in the oriignal array are less than equal to the element to be inserted
	{
		newarr[i]=arr[count];//adding those elelents to the new array
		count++;//advancing count
	}
	else if(arr[count]>m)//reached that comparsion where the new elelemtn is smaller than the element at index count
	{
		newarr[i]=m;/*inserting the new element and not advancing count so that we can add the remaining elelents in to the new array from the countth index of the original array*/
		break;
	}
}
for(i=count;i<l;i++)
{
	newarr[i+1]=arr[i];//adding the remaining eleemnts which are greater than the inserted element
}
for(i=0;i<l+1;i++)
	printf("%d,\t",newarr[i]);//printing the new array

}

