/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>


void findCombinations(int k,int n,int m);
void findCombinationsUtil(int arr[], int index, int num, int reducedNum, int n, int m);
int c=0;

int main()
{
    int n,k,m;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of k:");
    scanf("%d",&k);
    printf("Enter the value of m:");
    scanf("%d",&m);
    findCombinations(k,n,m);
    printf("All possible Journeys : %d",c);
}

void findCombinationsUtil(int arr[], int index, int num, int reducedNum, int n, int m)
{
	if (reducedNum < 0)
		return;
	if (reducedNum == 0 && index<=n)
	{
        int flag=0;
        
		for (int i = 0; i < index; i++)
        {
            if(arr[i]>m)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c++;
        }
		return;
	}
	int prev = (index == 0)? 1 : arr[index-1];
	for (int k = prev; k <= num ; k++)
	{
		arr[index] = k;
		findCombinationsUtil(arr, index + 1, num, reducedNum - k, n, m);
	}
}
void findCombinations(int k,int n,int m)
{
	int arr[k];
	findCombinationsUtil(arr, 0, k, k, n, m);
}