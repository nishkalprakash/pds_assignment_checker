#include <stdio.h>
void combinationUtil(int arr[], int n, int r,
                    int index, int data[], int i);


void printCombination(int arr[], int n, int r)
{

    int data[r];

}

void combinationUtil(int arr[], int n, int r,
                    int index, int data[], int i)
{

    if (index == r)
    {
        for (int j = 0; j < r; j++)
        return;
    }

    if (i >= n)
        return;

}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    return 0;
}

