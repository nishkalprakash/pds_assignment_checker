/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 4(c)
*/

#include<stdio.h>

//Declaring structure as given
struct elements
{
    int group[1000]; //list of elements
    int fornt; //index of front
    int rear;  //index of rear
};

int main()
{
    //declaring structure named queue
    struct elements queue;

    //initially both front and rear index are 0
    queue.fornt=0;
    queue.rear=0;

    //creating a infinite loop which will end for 3 as input
    while(1)
    {
        //creating menue
        printf("\n\n1. Enque, 2. Deque, 3. Exit\n");
        int choice=0;
        //Asking user for choice
        printf("Enter (1/2/3) : ");
        scanf("%d",&choice);

        //if choice == 1 then
        if(choice==1)
        {
            //asking user for a number
            int num;
            printf("Enter the element : ");
            scanf("%d",&num);

            //storing the entered number in rear end
            queue.group[queue.rear]=num;
            //Thus now rear end increases by 1
            queue.rear++;

            //Printing the created queue
            printf("\nThe queue contains: ");
            for(int i=0;i<queue.rear;i++)
            {
                printf("%d, ",queue.group[i]);
            }
        }
        //if choice == 2 then
        else if(choice==2)
        {
            //if queue is empty then printing desired result
            if(queue.rear==0)
            {
                printf("The queue is empty!\n");
                continue;
            }
            // if queue is not empty then shifting each element to its adjacent left index
            for(int i=0;i<queue.rear;i++)
            {
                queue.group[i]=queue.group[i+1];
            }

            //deleting is done , so, rear end decreases by 1
            queue.rear--;

            //Printing the new list
            printf("\nThe queue contains: ");
            for(int i=0;i<queue.rear;i++)
            {
                printf("%d, ",queue.group[i]);
            }
        }
        //if choice==3 then breaking the loop
        else if(choice==3)
        {
            break;
        }
        //if any choice except 1/2/3 is entered then asking user for valid input
        else
        {
            printf("Enter a valid option\n");
        }
    }
}
