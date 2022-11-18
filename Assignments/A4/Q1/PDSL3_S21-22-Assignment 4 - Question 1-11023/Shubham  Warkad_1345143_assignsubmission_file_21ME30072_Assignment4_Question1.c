//Name:-Shubham Gajanan Warkad
//Roll No. 21ME30072
//Lab Assignment-4       Question-1
#include <stdio.h>
void combiUntil(int arr[], int data[], int start, int end,int index, int r);

void printCombi(int arr[], int n, int r)
{

    int data[r];          // A temporary array to store all combination.
 
    // Print all combination using temporary array 'data[]'
    combiUntil(arr, data, 0, n-1, 0, r);
}
 
/* arr[]  ---> Input Array
   data[] ---> Temporary array to store current combination
   start & end ---> Starting and Ending indexes in arr[]
   index  ---> Current index in data[]
   r ---> Size of a combination to be printed */
void combiUntil(int arr[], int data[], int start, int end, int index, int r)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
 
    // replace index with all possible elements. The condition
    // "end-i+1 >= r-index" makes sure that including one element
    // at index will make a combination with remaining elements
    // at remaining positions
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combiUntil(arr, data, i+1, end, index+1, r);
    }
}
int main()
{
    int arr[50];
    int r,q;
    printf("Enter how many elements you want to enter in an array:");
    scanf("%d",&q);
    printf("Enter the elements of the array:");
    for (int i=0;i<q;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter combination length:");
    scanf("%d",&r);
    printCombi(arr, q, r);
}