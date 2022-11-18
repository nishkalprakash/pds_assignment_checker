/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>


// recursive function to generate combination
void Combination(int arr1[], int data[], int st, int end, int index, int l)
{
    

    if (index == l)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", data[j]);
        }

        printf("\n");
        return;
    }
    for (int i = st; i <= end && end - i + 1 >= l - index; i++)
    {
        data[index] = arr1[i];
        Combination(arr1, data, i + 1, end, index + 1, l);
    }
}

void printcombination(int arr1[], int n, int l)
{
    int data[l];
    Combination(arr1, data, 0, n - 1, 0, l);
}
int main()
{
    int l, i;
    int n;

    printf("enter the number of elements you want in your array\n"); // Taking input from the user for the number of elements
    scanf("%d", &n);
    int a[n];

    printf("enter the value of l\n");
    scanf("%d", &l);

    for (i = 0; i < n; i++)
    {
        printf("enter array element %d  ", i + 1); // taking input aout the array element
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("The combinations are: \n");
    printcombination(a, n, l);
}