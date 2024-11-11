// Code creator: ArunB (arunbsmn@kgpian.iitkgp.ac.in)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the linked list node structure
typedef struct Node {
    char data;
    struct Node *next;
} Node;

// Function to create a new node
Node* createNode(char data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append characters of a string to a linked list
Node* stringToLinkedList(const char *str) {
    Node *head = NULL, *tail = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        Node *newNode = createNode(str[i]);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to merge two linked lists without using extra memory
Node* mergeLinkedLists(Node *lstr1, Node *lstr2) {
    if (lstr1 == NULL) return lstr2;
    if (lstr2 == NULL) return lstr1;
    
    Node *tail = lstr1;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = lstr2;
    return lstr1;
}

// Function to display the contents of a linked list
void displayLinkedList(Node *head) {
    while (head != NULL) {
        printf("%c", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to free the memory of a linked list
void freeLinkedList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    char str1[100], str2[100];
    
    // Read two strings from the keyboard
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline if any

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline if any

    // Convert strings to linked lists
    Node *lstr1 = stringToLinkedList(str1);
    Node *lstr2 = stringToLinkedList(str2);

    // Merge the two linked lists
    Node *lstr = mergeLinkedLists(lstr1, lstr2);

    // Display the merged linked list
    printf("Merged linked list: ");
    displayLinkedList(lstr);

    // Free the memory allocated for the linked list
    freeLinkedList(lstr);

    return 0;
}
