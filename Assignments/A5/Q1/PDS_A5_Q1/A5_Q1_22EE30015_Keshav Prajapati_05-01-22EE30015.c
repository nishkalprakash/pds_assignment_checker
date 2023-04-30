/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 5
Description : To read no of elements and arrange elements in array with negative numbers on one side and positive on other without changing the order
*/

#include<stdio.h>
#define N 100

int main()
{

    int num;
    printf("Enter the number of elements you want to store : ");
    scanf("%d", &num);
    if(num>N)
    {
        printf("Error : n > 100\n");
        return 0;
    }

    //To take input for array
    int num_arr[num];
    printf("Enter %d integers : ", num);
    for(int i = 0; i < num ; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    //To print Original Array and find number of negative numbers
    printf("Original Array : ");
    for(int i = 0; i < num ; i++)
    {
        printf("%d ", num_arr[i]);
    }


    //To sort positive and negative elements seperatly without changing order of input
    printf("\nRearranged Array : ");
    for(int i = 0; i < num ; i++)
    {
        if(num_arr[i]<0)
        {
            printf("%d ", num_arr[i]);
        }
    }

    for(int i = 0; i < num ; i++)
    {
        if(num_arr[i]>=0)
        {
            printf("%d ", num_arr[i]);
        }
    }

    return 0;
}
