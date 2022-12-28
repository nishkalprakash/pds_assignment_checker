/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:6
Discription : To merge two arrays

*/
#include<stdio.h>
#include<stdlib.h>
int *Merge(int size1,int size2,int *ptr1,int *ptr2,int n)
{
	int i,k,count=0;
	int *ptr;
	
	printf("hello");

	for(i=0,k=0;i<size1,k<size2,count<n;count++)
	{
		if(ptr1[i]>ptr2[k])
		{
			ptr[count]=ptr2[k];
	
			k++;
		}
		else	if(ptr1[i]<ptr2[k])
		{
			ptr[count]=ptr1[i];
			
			i++;
		}
		else if(ptr1[i]==ptr2[k])
		{
			ptr[count]=ptr1[i];
			count++;
			ptr[count]=ptr2[k];
			i++;
			k++;
		} 

	}
	return ptr;
}
int main()
{
	int size1,size2,*ptr1,*ptr2;
	int n=size1+size2;
	printf("Enter size ");
	scanf("%d",&size1);
	ptr1=(int *)malloc(size1*sizeof(int));
	for(int i=0;i<size1;i++)
	{
		scanf("%d",ptr1+i);
	}
	ptr2=(int *)malloc(size2*sizeof(int));
	printf("Enter size ");
	scanf("%d",&size2);
	for(int i=0;i<size2;i++)
	{
		scanf("%d",ptr2+i);
	}
	int*m=Merge(size1,size2,ptr1,ptr2,n);
	for(int j=0;j<size1+size2;j++)
		printf("%d\n",m[j]);
	return 0;
}
	
