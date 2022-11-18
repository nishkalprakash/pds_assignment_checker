/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:4(c)
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue_arr[MAX];
int front=-1;
int rear=-1;

void input(int number)
{
        if( Full() )
        {
                printf("\nQueue is full\n");
                return;
        }
        if(front == -1 )                                                          //input()//
                front=0;

        if(rear==MAX-1)           //rear is at last position of queue//
                rear=0;
        else
                rear=rear+1;
        queue_arr[rear]=number ;
}

int del()
{
        int number;
        if( Empty() )
        {
                printf("\nQueue is empty\n");                                      //del() //
                exit(1);
        }
        number=queue_arr[front];
        if(front==rear)           // Only one element in queue //
        {
                front=-1;
                rear=-1;
        }
        else if(front==MAX-1)
                front=0;
        else
                front=front+1;
        return number;
}

int Empty()
{
        if(front==-1)                                                            //Empty()//
                return 1;
        else
                return 0;
}

int Full()
{
        if((front==0 && rear==MAX-1) || (front==rear+1))                         // Full()//
                return 1;
        else
                return 0;
}

void display()
{
        int i;
        if(Empty())
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nThe queue contains :\n");                                           //display()//
        i=front;
        if( front<=rear )
        {
                while(i<=rear)
                        printf("%d ",queue_arr[i++]);
        }
        else
        {
                while(i<=MAX-1)
                        printf("%d ",queue_arr[i++]);
                i=0;
                while(i<=rear)
                        printf("%d ",queue_arr[i++]);
        }
        printf("\n");
}

int main()
{
        int option,number;
        while(1)
        {
                printf("\n1.Enque");
                printf(" 2.Deque");                                                      //main() function//
                printf(" 3.Exit\n");
                printf("\nEnter the option : ");
                scanf("%d",&option);

                switch(option)
                {
                case 1 :
                        printf("\nEnter the element: ");
                        scanf("%d",&number);
                        input(number);
                        display();
                        break;
                case 2 :
                        printf("\nRemoved element : %d\n",del());
                        display();
                        break;
                case 3:
                        exit(1);
                default:
                        printf("\nWrong option\n");
                }
        }
        return 0;

}



