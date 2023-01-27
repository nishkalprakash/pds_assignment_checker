/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 10
* Description : Program to store data in a structure Customer
*/
#include <stdio.h>

#include <stdlib.h>

#include <string.h>


struct Customer {

    int account_number;

    char name[30];

    int balance;

    struct Customer *next;

};


struct Customer *head = NULL;


void insert_in_order(struct Customer *new_customer) {

    struct Customer *current = head;

    struct Customer *prev = NULL;


    while (current != NULL && current->account_number < new_customer->account_number) {

        prev = current;

        current = current->next;

    }


    if (prev == NULL) {

        new_customer->next = head;

        head = new_customer;

    } else {

        new_customer->next = current;

        prev->next = new_customer;

    }

}


void print_list_descending() {

    struct Customer *current = head;

    int i, j;

    struct Customer *temp;

    for (i = 0; current; i++)

        current = current->next;


    for (i = 0; i < i - 1; i++) {

        current = head;

        for (j = 0; j < i; j++)

            current = current->next;

        for (; current->next; current = current->next) {

            if (current->next->balance > current->balance) {

                temp->account_number = current->next->account_number;

                temp->balance = current->next->balance;

                strcpy(temp->name, current->next->name);


                current->next->account_number = current->account_number;

                current->next->balance = current->balance;

                strcpy(current->next->name, current->name);


                current->account_number = temp->account_number;

                current->balance = temp->balance;

                strcpy(current->name, temp->name);

            }

        }

    }

    current = head;

    while (current != NULL) {

        printf("Account Number: %d\n", current->account_number);

        printf("Name: %s\n", current->name);

        printf("Balance: %d\n", current->balance);

        current = current->next;

    }

}


int main() {

    char choice;

    struct Customer *new_customer;

    do {

        new_customer = (struct Customer *)malloc(sizeof(struct Customer));


        printf("Enter account number: ");

        scanf("%d", &new_customer->account_number);


        printf("Enter name: ");

        scanf("%s", new_customer->name);


        printf("Enter balance: ");

        scanf("%d", &new_customer->balance);


        insert_in_order(new_customer);


        printf("Do you want to enter another record? (Y/N) ");

        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');


    print_list_descending();


    return 0;

}
