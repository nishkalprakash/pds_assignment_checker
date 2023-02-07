z/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
ASSIGNMENT 10*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer {
    int account_number;
    char name[50];
    int balance;
    struct Customer *next;
};

// Function to insert a new customer in ascending order of account number
void insertCustomer(struct Customer **head, int account_number, char name[50], int balance) {
    struct Customer *newNode = (struct Customer *)malloc(sizeof(struct Customer));
    newNode->account_number = account_number;
    strcpy(newNode->name, name);
    newNode->balance = balance;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Customer *current = *head;
    struct Customer *prev = NULL;
    while (current != NULL && current->account_number < account_number) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        newNode->next = *head;
        *head = newNode;
    } else {
        prev->next = newNode;
        newNode->next = current;
    }
}

// Function to print the customers in descending order of balance
void printCustomers(struct Customer *head) {
    if (head == NULL) {
        printf("No customers to print\n");
        return;
    }

    struct Customer *current = head;
    while (current != NULL) {
        struct Customer *max = current;
        struct Customer *temp = current->next;
        while (temp != NULL) {
            if (temp->balance > max->balance) {
                max = temp;
            }
            temp = temp->next;
        }
        printf("Account number: %d, Name: %s, Balance: %d\n", max->account_number, max->name, max->balance);
        current = current->next;
    }
}

int main() {
    struct Customer *head = NULL;
    char choice;
    do {
        int account_number;
        char name[50];
        int balance;
        printf("Enter account number: ");
        scanf("%d", &account_number);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter balance: ");
        scanf("%d", &balance);
        insertCustomer(&head, account_number, name, balance);
        printf("Do you want to enter more customers? (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'y');
    printCustomers(head);
    return 0;
}