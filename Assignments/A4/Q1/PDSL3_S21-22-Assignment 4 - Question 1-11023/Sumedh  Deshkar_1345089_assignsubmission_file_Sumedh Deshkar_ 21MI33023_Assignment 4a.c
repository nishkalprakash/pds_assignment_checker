/*
Name: Sumedh Deshkar
Roll no.: 21MI33023
Sec : 3
Assignment : 4a
*/
#include <stdio.h>

/* a[]  ---> Input Array
  chosen[] ---> Temporary array to store indices of
                   current combination
   start & end ---> Starting and Ending indexes in arr[]
   l ---> Size of a combination to be printed */
void CombinationRepetitionUtil(int chosen[], int a[],
                    int index, int l, int start, int end)
{
    /* Since index has become r, current combination is
     ready to be printed, print*/
    if (index == l)
    {
        for (int i = 0; i < l; i++)
        {

            printf("%d" , a[chosen[i]]);

        }

        printf("\n");
        return;
    }

    // One by one choose all elements (without considering
    // the fact whether element is already chosen or not)
    // and recur
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
        CombinationRepetitionUtil(chosen, a, index + 1,
                                               l, i, end);
    }
    return;
}

// The main function that prints all combinations of size r
// in arr[] of size n with repetitions. This function mainly
// uses CombinationRepetitionUtil()
void CombinationRepetition(int a[], int n, int l)
{
    // Allocate memory
    int chosen[l+1];

    // Call the recursive function
    CombinationRepetitionUtil(chosen, a, 0, l, 0, n-1);
}

// Driver program to test above functions
int main()
{
   int a[100],i,n,l;
    printf("Enter the value of n: ");
    scanf("%d" ,&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the %d number :",i+1);
        scanf("%d" ,&a[i]);
    }

    printf("\nEnter the value of l: ");
    scanf("%d" ,&l);
    while(l>n)
    {
        printf("ERROR, the value of l must be less than n");
        printf("\nEnter the value of l again : ");
        scanf("%d" ,&l);
    }
    CombinationRepetition(a, n, l);
    return 0;
}
