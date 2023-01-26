#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

// Structure for a customer record

struct Customer {
    int account_number;
    char name[30];
    int balance;
    struct Customer* next;
}*head;


// Function to insert a new record in the linked list in ascending order of account number

void insert(int account_number, char name[30], int balance) {
   struct Customer* temp = (struct Customer*)malloc(sizeof(struct Customer));
    temp->account_number = account_number;
    strcpy(temp->name, name);
    temp->balance = balance;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    if (temp->account_number < head->account_number) {
        temp->next = head;
        head = temp;
        return;
    }

    struct Customer* current = head;
    while (current->next != NULL && current->next->account_number < temp->account_number) {
        current = current->next;
    }

    temp->next = current->next;
    current->next = temp;
}

// Function to print the records in the linked list in descending order of balance

void printRecords() {
    struct Customer* current = head;
    while (current != NULL) {
        printf("Account Number: %d\n", current->account_number);
        printf("Name: %s\n", current->name);
        printf("Balance: %d\n", current->balance);
        current = current->next;
    }
}


int main() {
    int choice;
    int account_number;
    char name[30];
    int balance;

    // Read records from the keyboard and store them in a linked list

    do {
        printf("Enter account number: ");
        scanf("%d", &account_number);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter balance: ");
        scanf("%d", &balance);
        insert(account_number, name, balance);
        printf("Do you want to continue? (1 for yes, 0 for no) ");
        scanf("%d", &choice);
    } while (choice == 1);

    // Print the records in the linked list in descending order of balance
    printRecords();
    return 0;

}



