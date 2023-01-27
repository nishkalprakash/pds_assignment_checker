#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to create a list of size n
struct Node* createList(int n) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    for (int i = 1; i <= n; i++) {
        struct Node* newNode = newNode(i);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to print a list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to get the union of two lists
struct Node* getUnion(struct Node* head1, struct Node* head2) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    struct Node* current1 = head1;
    struct Node* current2 = head2;

    while (current1 != NULL && current2 != NULL) {
        if (current1->data < current2->data) {
            if (head == NULL) {
                head = current1;
                tail = current1;
            } else {
                tail->next = current1;
                tail = current1;
            }
            current1 = current1->next;
        } else if (current2->data < current1->data) {
            if (head == NULL) {
                head = current2;
                tail = current2;
            } else {
                tail->next = current2;
                tail = current2;
            }
            current2 = current2->next;
        } else {
            if (head == NULL) {
                head = current1;
                tail = current1;
            } else {
                tail->next = current1;
                tail = current1;
            }
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    while (current1 != NULL) {
        tail->next = current1;
        tail = current1;
        current1 = current1->next;
    }

    while (current2 != NULL) {
        tail->next = current2;
        tail = current2;
        current2 = current2->next;
    }

    return head;
}

// Function to get the intersection of two lists
struct Node* getIntersection(struct Node* head1, struct Node* head2) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    struct Node* current1 = head1;