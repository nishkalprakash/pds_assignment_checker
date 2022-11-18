/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>
//function to print the array
void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
//function to swap the variables

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//permutation function
void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+start));

        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}

int main()
{

    int size=5;
    int i;
    int arr[2];
    printf("Enter the two digits\n");
    scanf("%d",&arr[i]);
    //calling permutation function
    permutation(arr, 0, 5);
    return 0;
}
