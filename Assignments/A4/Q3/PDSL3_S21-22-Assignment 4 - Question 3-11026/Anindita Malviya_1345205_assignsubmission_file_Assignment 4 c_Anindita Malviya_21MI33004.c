/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question : Assgn 4 c
*/

#include <stdio.h>

#define MAX 10
static int arr[] = {};
int temp = 0;
void enque(int p);
void deque(void);
int main()
{
    int option;
    while (option != 3)   //to make the program repetetive
    {
    printf("Enter the option: 1.Enque 2.Deque 3.Exit\n");   //prompting option
    scanf("%d",&option);

    if(option == 1)    //enque
    {
        int n;
        printf("Enter the element: ");
        scanf("%d",&n);
        enque(n);
    }
    else if(option == 2)   //deque
    {
        deque();
    }
    else if(option == 3)printf("Exiting...\n");   //Exit
    else
    {
        printf("Invalid option\n");     //if user types no. other than 1,2 or 3
    }

    }
}

void enque(int p)
{
    if (temp < MAX)
    {

        arr[temp] = p;      //enqueing
        temp++;
        printf("The queue contains: ");
        for(int i = 0; i < temp; i++)printf("%d, ",arr[i]);
        printf("\n");
    }
    else
    {
        printf("Value overflow\n");      //handling overflow
    }
}

void deque(void)
{
    if(temp != 0)
        {

            printf("Removed element: %d\n",arr[0]);
            for(int i = 0; i < temp - 1; i++)
            {
                arr[i] = arr[i+1];                //dequeing
            }
            temp--;
            if (temp == 0)printf("The queue is empty.\n");   //Handling Underflow
            else
            {
                printf("The Queue contains: ");
            for(int i = 0; i < temp; i++)printf("%d, ",arr[i]);
            printf("\n");
            }
        }
        else printf("The queue is Empty!\n");    //Handling Underflow
}
