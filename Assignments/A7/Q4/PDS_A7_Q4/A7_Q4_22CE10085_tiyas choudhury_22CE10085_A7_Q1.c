#include<stdio.h>
int main()
{
  int arr[100];int i;int n;int j,k;int temp;int t;
  printf("Enter the value of n");
  scanf("%d",&n);
  printf("Enter the array numbers");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
for(j=0;j<n;j++)
{
	for(k=0;k<n-1-j;k++)
	{
		if(arr[k]<arr[k+1])
		{
			temp=arr[k];
			arr[k]=arr[k+1];
			arr[k+1]=temp;
		}
	}
}
printf("largest number is");
for(t=0;t<n;t++)
{
	printf("%d",arr[t]);
}
return 0;





}
