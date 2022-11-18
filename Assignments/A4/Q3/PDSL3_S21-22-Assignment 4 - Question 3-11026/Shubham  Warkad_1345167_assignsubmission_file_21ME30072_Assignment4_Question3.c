//Name:-Shubham Gajanan Warkad
//Roll No. 21ME30072
//Lab Assignment-4       Question-3
#include <stdio.h>
#include<stdlib.h>
# define SIZE 100
void enque();      //Declaring enque function.
void deque();      //Declaring deque function.
void show();       //Declaring show function.
int ins_arr[SIZE];        //Declaring array of Elements.
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.Enque operation\n");
        printf("2.Deque operation\n");
        printf("3.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enque();
            show();
            break;                         //Switch case statements for for operation on 
            case 2:                        //the basis of user input.
            deque();
            show();
            break;
            case 3:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
 
void enque()                            //Defining enque function.
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);                              
        Rear = Rear + 1;
        ins_arr[Rear] = insert_item;                //Inserting element in the array.
    }
} 
 
void deque()                        //Defining deque function.
{
    if (Front == - 1 || Front > Rear)
    {
        printf("The queue is empty. \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", ins_arr[Front]);
        Front = Front + 1;
    }
} 
 
void show()                     //Defining show function.
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("The queue contains: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", ins_arr[i]);
        printf("\n");
    }
} 
