/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 4(c)
*/

#include <stdio.h>
#define MAX 1000

// Defining QUEUE struct
typedef struct {
    int list[MAX];
    int front;
    int rear;
} queue;

queue myQ = {{}, 0, 0}; // Initialized the queue struct

void status() { // Function to print all elements of queue
    if (myQ.front == myQ.rear) { // When queue contains no element
        printf("\n");
        return;
    }
    printf("The queue contains: ");
    for (int i = myQ.front; i < myQ.rear; i++) printf("%d ", myQ.list[i]); // Prints all elements from front to rear
    printf("\n");
}

void enque() { // Function to add element into queue
    if (myQ.rear == MAX-1) { // When rear hits the limit
        printf("Queue overflow.\n");
        return;
    }
    int temp;
    printf("Enter the element: ");
    scanf("%d", &temp);
    myQ.list[myQ.rear] = temp; // Adds new element at end of queue
    myQ.rear++;
}

void deque() { // Function to remove the first element of the queue
    if (myQ.rear == myQ.front) { // When no element is there
        printf("The queue is empty!\n");
        return;
    }
    printf("Removed element: %d\n", myQ.list[myQ.front]);
    myQ.front++;
}

int main() {
    int flag = 1;

    //PROGRAM MENU LOOP
    while (flag) {
        int choice;
        printf("Enter the option: 1. Enque, 2.Deque, 3. Exit\n"); //Asking for the chooice of what action has to be done
        scanf("%d", &choice);
        switch (choice) { //switch statements
            case(1): //case 1 which is for enque
                enque(); //enque function is being used here
                status();
                break;
            case(2) : //case 2 which is for deque
                deque(); //deque function is being used here
                status();
                break;
            case(3) : //Case 3 which is for exit
                flag = 0;
                break;
            default : //This is the default statement when an invalid choice is made
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}