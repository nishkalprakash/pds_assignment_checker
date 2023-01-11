/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
ASSIGNMENT 8*/

#include<stdio.h>

int main()
{ 
	
	int size;

	printf("number of elements in one row\n");
	scanf("%d",&size);
	int a[size][size];

	printf("enter the elements\n");
        for(int e=0;e<size;e++)
	{
		for (int g= 0;g <size; g++)
		{
			scanf("%d",&a[e][g]);
		}
	}
        
	for(int i=0;i<size;i++)
	{
		for (int b = 0;b <size; b++)
		{
			printf("%d",a[b][i]);
		}
	}


}
