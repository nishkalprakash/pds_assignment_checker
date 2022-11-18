/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int b;
    int *array_of_int;
    int maximum, minimum;
    printf("Enter no. of elements to be examined : "); // Taking input for the number of elements to be examined
    scanf("%d", &n);
    printf("Enter the elements : \n"); // entering the actual elements
    array_of_int = (int*)calloc(n,sizeof(int));

    for(int i=0; i<n; i++)
    {
        scanf("%d", &array_of_int[i]);
    }
    printf("Enter no. of bins : "); // Taking input for the number of bins
    scanf("%d", &b);

    maximum=array_of_int[0];
    minimum=array_of_int[0];
    for(int i=0; i<n; i++)
    {
        if(array_of_int[i]>maximum)
            maximum = array_of_int[i];

        if(array_of_int[i]<minimum)
            minimum = array_of_int[i];
    }

    int diff = maximum-minimum;
    int* boundary = (int*)calloc(b+1,sizeof(int));
    int* elements_in_bin = (int*)calloc(b+1,sizeof(int));
    for(int i=1; i<=b; i++)
    {
        elements_in_bin[i]=0;
    }
    boundary[0] = minimum;
    for(int i=1; i<=b; i++)
    {
        boundary[i] = boundary[i-1] + (diff/b)+1;
        boundary[i-1] = boundary[i-1] - 1;
    }

    int** elements_of_bin = (int*)calloc(b+1,sizeof(int));
    for(int i=1; i<=b; i++)
        elements_of_bin[i] = (int*)malloc(n*sizeof(int));

    for(int i=1; i<=b; i++)
    {
        int k=0;
        for(int j=0; j<n; j++)
        {
            if( array_of_int[j]>(boundary[i-1]+1) && (array_of_int[i]<boundary[i]) )
            {
                elements_of_bin[i][k] = array_of_int[j];
                elements_in_bin[i]++;
                k++;
            }
        }
    }



    for(int i=1; i<=b; i++)
    {
        printf("Bin %d --> ", i);
        for(int j=0; j<elements_in_bin[i]; j++)
        {
            printf(" %d, ", elements_of_bin[i][j]);
        }
        printf("\nNo. of elements in Bin %d = %d \n",i, elements_in_bin[i]); // printing the number of elements in the bin
    }
return 0;
}