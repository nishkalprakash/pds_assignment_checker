/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 4
	Description : Program to create bins of integers
*/

#include <stdio.h>

int N;

int max(int arr[])

{		
	int i;
	int max = 0;
	for (i = 0; i < N ; i++)
	{
		if (arr[i]>max)
			max = arr[i];
	}
	return max;
}

int min(int arr[])

{		
	int i;
	int min = arr[0];
	for (i = 0; i < N ; i++)
	{
		if (arr[i]<min)
			min = arr[i];
	}
	return min;
}

void GIVE(int arr[],int L,int G)
{
	int i;
	int flag = 0;
	for (i = 0; i < N; i++)
	{
		if ((arr[i]>=L)&&(arr[i]<G))
		{
			printf("%d ",arr[i]);
			flag++;
		}
	}
	printf("\t Elems = %d",flag);
}

int main()
{
	printf("Input length of array: ");
	scanf("%d",&N);
	int arr[N];
	int i;
	printf("Enter elements of array\n");
	for (i = 0; i < N; i++)
	{	
		scanf("%d",&arr[i]);
	}
	int N_BIN;
	printf("Enter number of bins: ");
	scanf("%d" , &N_BIN);
	
	int MAX_E = max(arr);
	int MIN_E = min(arr);

	int range = MAX_E - MIN_E;

	int BIN_SIZE  = (range+1)/N_BIN;
	
	i =1;	
	int j;
	for (j=0;j<=(N_BIN-1);j++)
	{
		printf("Bin %d -->",i);
		GIVE(arr,(MIN_E + BIN_SIZE*j),(MIN_E + BIN_SIZE*(j+1)));
		printf("\n");
		i++;
	}
	
	return 0;
}
	
	
		

	
		
