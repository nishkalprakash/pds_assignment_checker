// Program to print all combination of size l in an array of size n
#include <stdio.h>


// in a[] of size n. This function mainly uses combinationUtil()
void printCombination(int a[], int n, int l)
{
    // A temporary array to store all combination one by one
    int data[l];

    // Print all combination using temporary array 'data[]'
    combinationUtil(a, data, 0, n-1, 0, l);
}

/* a[]  ---> Input Array
   data[] ---> Temporary array to store current combination
   start & end ---> Starting and Ending indexes in a[]
   index  ---> Current index in data[]
   l ---> Size of a combination to be printed */
void combinationUtil(int a[], int data[], int start, int end,
                     int index, int l)
{
    // Current combination is ready to be printed, print it
    if (index == l)
    {
        for (int j=0; j<l; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    /* replace index with all possible elements. The condition
    "end-i+1 >= r-index" makes sure that including one element
     at index will make a combination with remaining elements
    at remaining positions */
    for (int i=start; i<=end && end-i+1 >= l-index; i++)
    {
        data[index] = a[i];
        combinationUtil(a, data, i+1, end, index+1, l);
    }
}

// Driver program to test above functions
// The main function that prints all combinations of size l
int main()
{
    int l,i,n,a[100];
    printf("enter size of array");
    scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   printf("Enter l :");
   scanf("%d",&l);

    printCombination(a, n, l);
}
