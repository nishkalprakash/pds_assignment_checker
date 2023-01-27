#include <stdio.h>

#include <stdlib.h>

#include <string.h>


struct Customer {

    int account_number;

    char name[30];

    int balance;

    struct Customer* next;

};


struct Customer* insert_in_order(struct Customer* head, struct Customer* new_customer) {

    // Check if the list is empty

    if (head == NULL) {

        return new_customer;

    }


    // Check if the new customer's account number is smaller than the head's

    if (new_customer->account_number < head->account_number) {

        new_customer->next = head;

        return new_customer;

    }


    // Find the insertion point

    struct Customer* current = head;

    while (current->next != NULL && current->next->account_number < new_customer->account_number) {

        current = current->next;

    }


    // Insert the new customer at the correct position

    new_customer->next = current->next;

    current->next = new_customer;

    return head;

}


void print_list_descending(struct Customer* head) {

    // Check if the list is empty

    if (head == NULL) {

        return;

    }


    // Find the last customer in the list

    struct Customer* current = head;

    while (current->next != NULL) {

        current = current->next;

    }


    // Print the customers in reverse order

    while (current != NULL) {

        printf("Account Number: %d\n", current->account_number);

        printf("Name: %s\n", current->name);

        printf("Balance: %d\n", current->balance);

        current = current->next;

    }

}


int main() {

    struct Customer* head = NULL;


    char input[30];

    while (1) {

        printf("Enter customer's account number: ");

        scanf("%d", &input);


        // Check if the user wants to exit

        if (strcmp(input, "exit") == 0) {

            break;

        }


        struct Customer* new_customer = (struct Customer*) malloc(sizeof(struct Customer));

        new_customer->account_number = atoi(input);


        printf("Enter customer's name: ");

        scanf("%s", new_customer->name);


        printf("Enter customer's balance: ");

        scanf("%d", &new_customer->balance);


        head = insert_in_order(head, new_customer);

    }


    print_list_descending(head);


    return 0;

}
