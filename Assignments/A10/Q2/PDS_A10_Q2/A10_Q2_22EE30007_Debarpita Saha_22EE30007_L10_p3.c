/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 10
* Description : Program to check if list is in ascending or descending order
*/
#include <stdio.h>

#include <stdlib.h>


struct Node {

    int data;

    struct Node *next;

};


void load(struct Node *head_ref, int new_data)

{

    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}


int isSorted(struct Node *head)

{

    if (head == NULL)

        return 1;


    int isAscending = 1;

    int isDescending = 1;

    struct Node *current = head;

    struct Node *next = current->next;


    while (next != NULL) {

        if (current->data > next->data) {

            isAscending = 0;

        } else if (current->data < next->data) {

            isDescending = 0;

        }


        if (!isAscending && !isDescending) {

            return 0;

        }

        current = current->next;

        next = current->next;

    }

    return isAscending || isDescending;

}


int main()

{

    struct Node *head = NULL;

    load(&head, 9);

    load(&head, 7);

    load(&head, 5);

    load(&head, 3);

    load(&head, 1);


    if (isSorted(head)) {

        printf("The input list is in sorted order.\n");

    }

     else {

        printf("The input list is not in sorted order.\n");

    }


    return 0;

}



