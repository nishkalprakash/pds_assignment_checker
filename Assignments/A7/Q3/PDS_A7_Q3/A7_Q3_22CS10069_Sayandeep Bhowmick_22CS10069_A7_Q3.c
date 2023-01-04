/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 7
	Description : Checks whether two strings are Anagrams or not
*/
#include <stdio.h>
#include <string.h>

void sort(char C[])								//Bubble sort. Sorts the character array
{
	int n=strlen(C);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1-i; ++j)
		{
			if(C[j]>C[j+1])
			{
				int temp=C[j];
				C[j]=C[j+1];
				C[j+1]=temp;
			}
		}
	}
}

int main()
{
	int n;
	char S[100],R[100];									//No Word exists which contains more than 100 characters. 50 would have been a good size too.
	printf("Enter the two words(Write each alphabet in uppercase or lowercase) : ");
	scanf("%s",S);
	scanf("%s",R);
	if((n=strlen(S))!=strlen(R))						//If the two strings have different lengths they can never be anagram
	{
		printf("%s and %s is not an Anagram\n", S, R);
		return 0;
	}
	char A[n],B[n];
	strcpy(A,S);
	strcpy(B,R);										//We store S and R in A and B so that their value is not affected
	sort(A);
	sort(B);
	for (int i = 0; i < n; ++i)
		if (A[i]!=B[i])									//The sorted arrays must be equal
		{
			printf("%s and %s is not an Anagram\n", S, R);
			return 0;
		}
	printf("%s and %s is an Anagram\n", S, R);
	return 0;
}