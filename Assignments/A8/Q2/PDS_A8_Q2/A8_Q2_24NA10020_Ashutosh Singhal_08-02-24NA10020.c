#include <stdio.h>

int main()
{
int n;
int A[101];
printf("enter the size of array \n");
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
printf("enter the element \n");
scanf("%d",&A[i]);
}
int k,j,temp;
for (k=0;k<n;k++)
	{
	for (j=0;j<n-k-1;j++)
	{
	if (A[j]>A[j+1])
	{
	temp=A[j];
	A[j]=A[j+1];
	A[j+1]=temp;
	}
	}
	}
for(int z=0;z<n;z++)
{
printf("%d ",A[z]);
}


printf("\n");
int m;
printf("enter the element to be inserted \n");
scanf("%d",&m);
int pos;
int count =0;
while (m>A[pos++]);


int r;
for(r=n;r>=pos;r--)
{
A[r+1]=A[r];
}

A[pos]=m;
n++;
for(int z=0;z<n;z++)
{
printf("%d ",A[z]);
}


return 0;
}






