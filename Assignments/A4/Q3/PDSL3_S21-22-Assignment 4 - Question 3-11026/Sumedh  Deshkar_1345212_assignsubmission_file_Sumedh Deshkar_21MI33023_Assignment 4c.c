/*
Name : Sumedh Deshkar
Roll no. : 21MI33023
Sec : 3
Assignment : 4c
*/


#include <stdio.h>

#define MAX 10
//max no of elements
static int arr[] = {};
int temp = 0;
void enque(int p);//adding
void deque(void);//removing
int main()
{
    int option=0;
    while (option != 3)//menu
    {
    printf("Enter the option: 1.Enque 2.Deque 3.Exit\n");
    scanf("%d",&option);

    if(option == 1)
    {
        int n;
        printf("Enter the element: ");
        scanf("%d",&n);
        enque(n);
    }
    else if(option == 2)
    {
        deque();
    }
    else if(option == 3)printf("Exiting...\n");
    else
    {
        printf("Invalid option\n");
    }

    }
}

void enque(int p)
{
    if (temp < MAX)
    {
        arr[temp] = p;
        temp++;//change ending value
        printf("The queue contains: ");
        for(int i = 0; i < temp; i++)printf("%d, ",arr[i]);
        printf("\n");
    }
    else //overflow condition
    {
        printf("Value overflow\n");
    }
}

void deque(void)
{
    if(temp != 0)
        {
            printf("Removed element: %d\n",arr[0]);
            for(int i = 0; i < temp - 1; i++)//shifting queue elements
            {
                arr[i] = arr[i+1];
            }
            temp--;
            if (temp == 0)printf("The queue is empty.\n");
            else
            {
                printf("The Queue contains: ");
            for(int i = 0; i < temp; i++)printf("%d, ",arr[i]);
            printf("\n");
            }
        }
        else printf("The queue is Empty!\n");//underflow condition
}
