/* NAME SOUVIK SARKAR
	ROLL NO. 22ME10083
	ASSGNMENT 2
	*/
// Programme to calculaate the coprime number of input array
#include<stdio.h>

void GCD(int m, int n)
{
	int i,p;
	int flag=0;
	if(m>=n)
		p=n;
	else
		p=m;
	for(i=2;i<=p;i++)
	{
		if((m%i==0)&&(n%i==0))
			flag++;
	}
	if(flag==0)
		printf("(%d %d)",m,n);
}

/*{
	if(flag==0)
		printf("(%d %d)",a,b);
}*/
int main()
{
	int x;
	int arr[x];
	printf("Enter the total no of elements:\n");
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
		printf("Enter the elements: ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<x;i++)
	{
		for(int j=1;j<x;j++)
		{
			GCD(arr[i],arr[j]);
			//CoPrime(arr[i],arr[j]);
		}
	}
	return 0;


}