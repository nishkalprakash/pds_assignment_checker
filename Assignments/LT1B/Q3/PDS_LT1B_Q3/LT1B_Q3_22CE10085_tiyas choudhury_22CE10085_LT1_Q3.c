/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 4
   Description : Program  to find largest and second largest no
*/
#include<stdio.h>
int main()
{
	int n,i;int max2=0;;int j;int max;
	printf("Enter the value of n");//Input from user
	scanf("%d",&n);
	int arr[n];
for(i=0;i<n;i++)
{
	printf("Enter array nos");//Input from user
	scanf("%d",&arr[i]);
}
 max =arr[0];
for(j=1;j<n;j++);
{
	if(max<arr[j])
	{
		max=arr[j];
		max2=arr[j-1];
	}


}
printf("Max:%d",max);//Prints max
printf(" Second max:%d",max2);//Prints second max


return 0;
}




