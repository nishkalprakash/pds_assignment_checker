/* kethavath shivakumar
  21MI31013   */

  #include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("put the number of array elements : ");
    int x;
     scanf("%d", &x);

    int* A=(int*)calloc(x, sizeof(int));
    printf("put the array elements : ");
    for(int i=0;
     i<x; i++)
    scanf("%d", &A[i]);

    printf("Enter the number of bins = ");
    int y;
    scanf("%d", &y);

    int HIGHEST=A[0];
     int SMALLEST=A[0];
     for(int i=0;
     i<x; i++)
    {
    if(A[i]>HIGHEST)
            HIGHEST = A[i];

    if(A[i]<SMALLEST)
            SMALLEST = A[i];
    }

    int diff = HIGHEST-SMALLEST;
    int* BinBoundaries = (int*)calloc(y+1,sizeof(int));
    int* NoOfElementsInBin = (int*)calloc(y+1,sizeof(int));
    for(int i=1; i<=y; i++)
    {
        NoOfElementsInBin[i]=0;
    }
    BinBoundaries[0] = SMALLEST;
    for(int i=1; i<=y; i++)
    {
        BinBoundaries[i] = BinBoundaries[i-1] + (diff/y)+1;
        BinBoundaries[i-1] = BinBoundaries[i-1] - 1;
    }

    int** BinElements = (int*)calloc(y+1,sizeof(int));
    for(int i=1; i<=y; i++)
        BinElements[i] = (int*)malloc(x*sizeof(int));

    for(int i=1; i<=y; i++)
    {
        int k=0;
        for(int j=0; j<x; j++)
        {
            if( A[j]>(BinBoundaries[i-1]+1) && (A[i]<BinBoundaries[i]) )
            {
                BinElements[i][k]= A[j];
                NoOfElementsInBin[i]++;
                k++;
            }
        }
    }

    for(int i=1; i<=y; i++)
    {
        printf(" BIN %d me %d ", i, NoOfElementsInBin[i]);
    }

    for(int i=1; i<=y; i++)
    {
        printf("Bin %d --> ", i);
        for(int j=0; j<NoOfElementsInBin[i]; j++)
        {
            printf(" %d, ", BinElements[i][j]);
        }
        printf(" number of elements in Bin %d = %d \n",i, NoOfElementsInBin[i]);
    }
}
