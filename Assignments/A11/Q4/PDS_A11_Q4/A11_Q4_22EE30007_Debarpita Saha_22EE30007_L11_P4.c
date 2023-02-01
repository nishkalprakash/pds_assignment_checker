/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 11
* Description : Program to delete a value in an already existing sorted linked list
*/
#include<stdio.h>

#include<stdlib.h>


struct node {

    int data;

    struct node *next;

};


void deleteValue(struct node** head_ref, int key) {

    struct node* temp = *head_ref, *prev;

    

    if (temp != NULL && temp->data == key) {

        *head_ref = temp->next;

        free(temp);

        return;

    }

    

    while (temp != NULL && temp->data != key) {

        prev = temp;

        temp = temp->next;

    }

    

    if (temp == NULL) {

        printf("%d does not exist\n", key);

        return;

    }

    

    prev->next = temp->next;

    free(temp);

}


void push(struct node** head_ref, int new_data) {

    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;

}


void printList(struct node *head) {

    while (temp!= NULL) {

        printf("%d ", temp->data);

        temp = temp->next;

    }

    printf("\n");

}


int main() {

    struct node* head = NULL;

    int n, m, i, x;

    

    printf("Enter the number of elements in the linked list: ");

    scanf("%d", &n);

    

    for (i=0; i<n; i++) {

        printf("Enter element %d: ", i+1);

        scanf("%d", &x);

        push(&head, x);

    }

    

    printf("Enter the value to be deleted: ");

    scanf("%d", &m);

    

    deleteValue(&head, m);

    printf("Linked list after deleting %d: ", m);

    printList(head);

    

    return 0;

}


