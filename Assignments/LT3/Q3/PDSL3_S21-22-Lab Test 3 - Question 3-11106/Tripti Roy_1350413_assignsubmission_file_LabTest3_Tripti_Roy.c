#include <stdio.h>

//function to find the combination of two numbers
void Combination(int result[], int arr[],
                    int index, int m, int start, int end)
{

    if (index == m)
    {
        for (int i = 0; i < m; i++){

            printf("%d ", arr[result[i]]);
        }
        printf("\n");
        return;
    }


    for (int i = start; i <= end; i++)
    {
        result[index] = i;
        Combination(result, arr, index + 1,m, i, end);
    }
    return;
}
void CombinationRep(int arr[], int n, int m)
{

    int result[m+1];

    // Call the recursive function
    Combination(result, arr, 0, m, 0, n-1);
}


int main()
{
    int n1, n2, n=2;

    printf("Enter two digits: ");
    scanf("%d%d", &n1, &n2);
    int str[] = {n1, n2};
    int m = 5;
    CombinationRep(str, n, m);
    return 0;
}
