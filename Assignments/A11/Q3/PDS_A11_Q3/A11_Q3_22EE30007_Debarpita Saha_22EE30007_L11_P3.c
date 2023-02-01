/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 11
* Description : Program to insert a new value in an already existing sorted linked list
*/
#include <stdio.h>

#include <stdlib.h>


struct node {

    int data;

    struct node* next;

};


void insert_sorted(struct node** head, int new_value) {

    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_value;

    new_node->next = NULL;


    if (*head == NULL || (*head)->data >= new_value) {

        new_node->next = *head;

        *head = new_node;

        return;

    }


    struct node* current = *head;

    while (current->next != NULL && current->next->data < new_value) {

        current = current->next;

    }


    new_node->next = current->next;

    current->next = new_node;

}


void print_list(struct node* head) {

    struct node* current = head;

    while (current != NULL) {

        printf("%d ", current->data);

        current = current->next;

    }

    printf("\n");

}


int main() {

    struct node* head = NULL;

    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int value;

        scanf("%d", &value);

        insert_sorted(&head, value);

    }

    scanf("%d", &m);

    insert_sorted(&head, m);

    print_list(head);

    return 0;

}



