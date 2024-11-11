// Code creator: Atonu (atonughosh@kgpian.iitkgp.ac.in)
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    char data;
    struct Node* next;
};

// Function to create a new node with given character data
struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a character to the linked list
void appendNode(struct Node** head_ref, char data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
    } else {
        struct Node* temp = *head_ref;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to traverse and print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%c", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    struct Node* head = NULL;
    char *input = argv[1];

    // Store each character in the linked list
    for (int i = 0; input[i] != '\0'; i++) {
        appendNode(&head, input[i]);
    }

    // Print the linked list
    printf("Stored characters in linked list: ");
    printList(head);

    return 0;
}

