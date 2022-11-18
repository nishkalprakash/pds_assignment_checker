/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/



#include <stdio.h>

#define MAX 100

int enque(int arr[], int length, int x)
{
    int flag = 1;

    for (int i = 0; i < length; i++)
    {

        if (arr[i] == x)
        {
            printf("The queue contains %d", x);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        if (length == MAX)
        {
            printf("Queue reached its maximum size MAX");
        }
        else
        {
            arr[length] = x;

            length++;

            printf("The queue contains : ");
            printf("%d", *arr);
            for (int i = 1; i < length; i++)
            {
                printf("%d", arr[i]);
            }
        }
    }
    return flag;
}

int deque(int arr[], int length)
{
    int flag = 0;
    if (length == 0)
    {
        printf("The queue is empty !!");
    }

    else
    {

        flag = 1;

        printf("Removed element %d\n", *arr);
        for (int i = 0; i < length - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;
        printf("The queue contains : ");
        printf("%d", *arr);
        for (int i = 1; i < length; i++)
        {
            printf(",%d", arr[i]);
        }
    }
    return flag;
}

int main()
{
    int n, choice, num[MAX];
    static int length = 0;

    printf("Enter the option: 1. Enque, 2. Deque \n");
    scanf("%d", &choice);

    while (choice != 1)
    {
        if (choice == 2)
        {
            deque(num, length);
            printf("\nEnter the option: 1. Enque, 2. Deque \n");
        }
        else
        {
            printf("Enter a valid option !!");
            scanf("%d", &choice);
        }
    }

    if (choice == 1)
    {
        printf("Enter the element : ");
        scanf("%d", &n);

        if (enque(num, length, n) == 1)
            length++;
    }
    printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
    scanf("%d", &choice);

    while (1 > 0)
    {
        if (choice == 1)
        {
            printf("Enter the element : ");
            scanf("%d", &n);
            if (enque(num, length, n) == 1)
                length++;
            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
        }
        else if (choice == 2)
        {
            if (deque(num, length) == 1)
                length--;
            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            printf("Enter a valid option !!");
            scanf("%d", &choice);
        }
    }
    printf("Quit");
}