/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:4(a)
*/
#include<stdio.h>


void Sequence(int a[], int N, int l)
{
	int temp[l+1];                                                                                //Sequence//

	SequenceRep(temp, a, 0, l, 0, N-1);
}

void SequenceRep(int temp[], int a[],int x, int l, int start, int end)
{
	if (x == l)
	{
		for (int i = 0; i < l; i++)
			printf("%d ", a[temp[i]]);                                                             //Sequence//
		printf("\n");
		return 0;
	}

	for (int i = start; i <= end; i++)
	{
		temp[x] = i;
		SequenceRep(temp, a, x + 1,l, i, end);
	}
	return 0;
}

int main()
{
    int N,l,i;
    printf("Enter the values of N and l respectively:\n");                                          //Main function//
    scanf("%d%d",&N,&l);
    int a[N];                                                                                       //l : length of the combination//
    printf("Enter the elements of the array:\n");
    for(i=0;i<N;i++)                                                                                // N : No of elements in given array a[] //
    {
        scanf("%d",&a[i]);
    }

    Sequence(a,N,l);

    return 0;
}
