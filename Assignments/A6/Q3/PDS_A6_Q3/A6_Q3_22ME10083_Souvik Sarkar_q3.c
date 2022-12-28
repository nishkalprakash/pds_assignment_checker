/* NAME SOUVIK SARKAR
	ROLL NO. 22ME10083
	ASSGNMENT 3
	*/
// Programme to calculate the sorted merged array
#include<stdio.h>
int Merge(int size1,int size2,int *ptr1,int *ptr2)
{
	int low,high;
	int size = size1 +size2;
	int arr[size];
	low= *ptr1, high= *ptr2;
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++){
			if(*(ptr1+i)<= *(ptr2+j)){
				printf("%d",low);
				break;
			}
			else{
				printf("%d",high);
				break;
			}	
		}
	}	
			

}
void main()
{
	// Varriables initialization
	int size1,size2;
	int A[size1],B[size2];
	//Taking i/p for A array
	printf("Enter the size of elements in A array:\n");
	scanf("%d",&size1);
	for(int i=0;i<size1;i++)
	{
		printf("Elements are:\n");
		scanf("%d",&A[i]);
	}
	for(int j=0;j<size1;j++)
		printf("%d",A[j]);
	//Taking i/p for B array
	printf("Enter the size of elements in B array:\n");
	scanf("%d",&size2);
	for(int i=0;i<size2;i++)
	{
		printf("Elements are:\n");
		scanf("%d",&B[i]);
	}
	for(int j=0;j<size2;j++)
		printf("%d",B[j]);

	Merge(size1,size2,&A[size1],&B[size2]);


}