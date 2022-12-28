/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 6
Description : 
*/

#include <stdio.h>

int* BuildSet(int *A, int n)
{
for(int i=0;i<n;i++)
{
scanf("%d",*(A+i));
}
}


int SearchSet(int* A, int x)
{
for(int i=0;i<n;i++)
{
	if(x == *(A+i))
	{

	}
}
}

int* Union(int* A,int a,int *B,int b,int *union_size)
{

}

int* Difference(int* A,int a,int *B,int b,int *diff_size)
{

}

void print(int *A,int n)
{

}

int main()
{
int na,nb;
printf("Enter no. of elements in Set A");
scanf("%d",&na);
int a[na];
BuildSet(a,na);
printf("Enter no. of elements in Set B");
scanf("%d",&nb);
int b[nb];
BuildSet(b,nb);
int choice;
while(1)
{
printf("Enter choice : \n");
printf("  Press ‘1’ to perform search in Set A \n");
printf("  Press ‘2’ to perform search in Set B \n");
printf("  Press ‘3’ to perform Union of Set A and Set B \n");
printf("  Press ‘4’ to perform Intersection of Set A and Set B \n ");
printf("  Press ‘5’ to perform Difference of Set A and Set B \n");
printf("  Press any other key to quit \n");
scanf("%d ", &choice);
}

return 0;
}
