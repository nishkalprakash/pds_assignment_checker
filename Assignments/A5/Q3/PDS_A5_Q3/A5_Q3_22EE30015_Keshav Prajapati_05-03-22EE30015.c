/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 5
Description :
*/

#include<stdio.h>

void swap(int *p, int *q);
void reverse(int *a);

int main()
{
    int num, dir;
    printf("Enter the size of array and its direction : ");
    scanf("%d %d", &num, &dir);

    //For input in array
    int num_arr[num];
    printf("Enter %d integers : \n", num);
    for(int i = 0; i < num ; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    //Printing the original array
    printf("Original Array : ");
    for(int i = 0; i < num ; i++)
    {
        printf("%d ", num_arr[i]);
    }

    printf("\n");

    //To print Array after reverse
    printf("Array after reverse : ");
    for(int i = num-1; i >=0 ; i--)
    {
        printf("%d ", num_arr[i]);
    }

    if(dir == 1)
    {
        printf("\nArray after left cyclic shift : ");
        for(int i = num-1; i > 0; i--)
        {
            swap(&num_arr[i-1], &num_arr[i]);
            printf("%d ", num_arr[i]);
        }
        printf("%d", num_arr[0]);
    }

    else
    {
        printf("\nArray after right cyclic shift : ");
        for(int i = 0; i < num-1; i++)
        {
            swap(&num_arr[i+1], &num_arr[i]);
            //printf("%d ", num_arr[num-1]);
        }
        for(int i = num-1; i >=0 ; i--)
        {
            printf("%d ", num_arr[i]);
        }

    }
}

//To swap to integers with there values
void swap (int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

