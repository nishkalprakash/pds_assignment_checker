//C program to output the bin contents as well as number of elements in each bin
//Gargi Gangwar
//21MF10017


#include <stdio.h>
#include <stdlib.h>

int main()
{


    int *arr;
    int n, i,store;

    printf("Enter number of elements:");
    //input number of elements from the user
    scanf("%d",&n);
    printf("Number: %d\n", n);

    //Dynamic allocation
    arr = (int*)malloc(n * sizeof(int));


        for (i = 0; i < n; ++i)
        {
            arr[i] = i + 1;
        }

        // Elements of the array printing
        printf("Array elements: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", arr[i]);
        }

    //input number of bins
    int num;
    printf("enter no of bins\n");
    scanf("%d", &num);

   //finding range of bin
   int mini=arr[0];
   int maxi=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxi)
            maxi = arr[i];

        if(arr[i]<mini)
            mini = arr[i];
    }

    int diff = maxi-mini;
    int* BINBOUND = (int*)calloc(num+1,sizeof(int));
    int* BINelenum = (int*)calloc(num+1,sizeof(int));
    for(int i=1; i<=num; i++)
    {
        BINelenum[i]=0;
    }
    BINBOUND[0] = mini;
    for(int i=1; i<=num; i++)
    {
        BINBOUND[i] = BINBOUND[i-1] + (diff/num)+1;
        BINBOUND[i-1] = BINBOUND[i-1] - 1;
    }

    int** binElements = (int*)calloc(num+1,sizeof(int));
    for(int i=1; i<=num; i++)
        binElements[i] = (int*)malloc(n*sizeof(int));

    for(int i=1; i<=num; i++)
    {
        int k=0;
        for(int j=0; j<n; j++)
        {
            if( arr[j]>(BINBOUND[i-1]+1) && (arr[i]<BINBOUND[i]) )
            {
                binElements[i][k] = arr[j];
                BINelenum[i]++;
                k++;
            }
        }
    }

    for(int i=1; i<=num; i++)
    {
        printf(" BIN %d has %d ", i, BINelenum[i]);
    }

    //printing number of elements in respective bins
    for(int i=1; i<=num; i++)
    {
        printf("Bin %d --> ", i);
        for(int j=0; j<BINelenum[i]; j++)
        {
            printf(" %d, ", binElements[i][j]);
        }
        printf("  Number of elements in Bin %d = %d \n",i, BINelenum[i]);
    }
    return 0;
}
