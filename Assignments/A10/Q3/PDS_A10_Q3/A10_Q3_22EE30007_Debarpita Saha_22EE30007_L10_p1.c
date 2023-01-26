/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 10
* Description : Program to check if list contains any duplicate number
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


void check_duplicate(struct Node *head)

{

    struct Node *current = head;

    int duplicate_flag = 0;

    while (current != NULL) {

        struct Node *temp = current;

        while (temp->next != NULL) {

            if (temp->next->data == current->data) {

                printf("%d ", temp->next->data);

                duplicate_flag = 1;

                temp->next = temp->next->next;

            }

            else

                temp = temp->next;

        }

        current = current->next;

    }

    if (!duplicate_flag)

        printf("The input list does not contain any duplicate number.");

}


void find_min_max(struct Node *head, int *min, int *max)

{

    struct Node *current = head;

    *min = *max = head->data;

    while (current != NULL) {

        if (current->data > *max)

            *max = current->data;

        if (current->data < *min)

            *min = current->data;

        current = current->next;

    }

}


int main()

{

    struct Node *head = NULL;

    load(&head, 1);

    load(&head, 2);

    load(&head, 3);

    load(&head, 9);

    load(&head, 7);

    load(&head, 7);

    load(&head, 6);

    load(&head, 5);

    load(&head, 4);

    load(&head, 3);

    load(&head, 2);

    load(&head, 1);


    printf("The input list contains duplicate numbers of: ");

    check_duplicate(head);

    int min, max;

    find_min_max(head, &min, &max);

    printf("\nMinimum number is: %d\n", min);

    printf("Maximum number is: %d\n", max);


    return 0;

}



