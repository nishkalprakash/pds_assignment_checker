/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>

void recuv_func_1(int serial[], int arr[], int index, int l, int s, int e) //inroducing the recursive fuctions
{
    if (index == l)
    {
        for (int i = 0; i < l; i++)
            printf("%d ", arr[serial[i]]);
        printf("\n");
        return;
    }
    for (int i = s; i <= e; i++)          //One by one we are choosing all elements (without considering the whether element is already chosen or not)and recurring
    {
        serial[index] = i;
        recuv_func_1(serial, arr, index + 1, l, i, e); // Calling the recursive function
    }
    return;
}

void recuv_func_2(int arr[], int n, int l)
{
    int serial[l+1];
    recuv_func_1(serial, arr, 0, l, 0, n-1); // Calling the recursive function
}

int main()     // main function to take inputs
{
    int f, i;
    printf("enter number of elements in array ");
    scanf("%d", &f);
    int arr[f];
    printf("enter elements in array ");
    for(i=0;i<f;i++){
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int l;
    printf("Enter length ");
    scanf("%d", &l);
    recuv_func_2(arr, n, l);
    return 0;
}
