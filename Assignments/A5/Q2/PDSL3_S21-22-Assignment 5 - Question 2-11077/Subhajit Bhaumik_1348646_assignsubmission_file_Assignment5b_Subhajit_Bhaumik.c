#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,a;
    //Printing number of array elements
    printf("Enter no. of array elements : ");
    scanf("%d", &n);

    int* B= (int*)calloc(n,sizeof(int));
    printf("Enter array elements : ");
    for(int i=0; i<n; i++)
        scanf("%d", &B[i]);

    printf("Enter no. of bins : ");
    scanf("%d", &a);

    int Max=B[0];
    int Min=B[0];
    for(int i=0; i<n; i++)
    {
        if(B[i]>Max)
            Max = B[i];

        if(B[i]<Min)
            Min= B[i];
    }
//creating bins and putting the array elements in appropriate bins
    int diff = Max-Min;
    int* Boundaries = (int*)calloc(a+1,sizeof(int));
    int* noOfElements = (int*)calloc(a+1,sizeof(int));
    for(int i=1; i<=a; i++)
    {
        noOfElements[i]=0;
    }
    Boundaries[0] = Min;
    for(int i=1; i<=a; i++)
    {
        Boundaries[i] = Boundaries[i-1] + (diff/a)+1;
        Boundaries[i-1] = Boundaries[i-1] - 1;
    }

    int** binElements = (int*)calloc(a+1,sizeof(int));
    for(int i=1; i<=a; i++)
        binElements[i] = (int*)malloc(n*sizeof(int));
    for(int i=1; i<=a; i++)
    {
        int k=0;
        for(int j=0; j<n; j++)
        {
            if( B[j]>(Boundaries[i-1]+1) && (B[i]<Boundaries[i]) )
            {
                binElements[i][k] = B[j];
                noOfElements[i]++;
                k++;
            }
        }
    }
//Outputting the bin contents and number of elements in each bin
    for(int i=1; i<=a; i++)
    {
        printf("Bin %d -->  ", i);
        for(int j=0; j<noOfElements[i]; j++)
        {
            printf(" %d, ", binElements[i][j]);
        }
        printf("  No. of elements in Bin %d = %d \n",i, noOfElements[i]);
    }
}
