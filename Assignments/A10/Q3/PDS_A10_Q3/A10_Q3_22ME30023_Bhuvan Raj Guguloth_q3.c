#include <stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */


// Structure for a node in the linked list

struct Node {
    int data;
    struct Node* next;
}*head;

// Function to check if the linked list contains any duplicate elements

void checkDuplicates(struct Node* head) {
    struct Node* current = head;
    int flag = 0;
    printf("The input list contains duplicate numbers of:");

    while (current->next != NULL) {
        struct Node* temp = current->next;
        while (temp != NULL) {
            if (current->data == temp->data) {
                printf("%d,", current->data);
                flag = 1;
            }
            temp = temp->next;
        }
        current = current->next;
    }

    if (flag == 0)
    printf("None");
    printf("\n");
}

// Function to find the minimum and maximum numbers in the input list

void findMinMax(struct Node* head) {
    int min = head->data;
    int max = head->data;
    struct Node* current = head;
    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }
    printf("Minimum number is: %d\n", min);
    printf("Maximum number is: %d\n", max);
}

// Function to insert a new node at the end of the linked list

void insert(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = temp;
}

int main() {
    // Create a linked list
    insert(1);
    insert(2);
    insert(3);
    insert(9);
    insert(7);
    insert(7);
    insert(6);
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);

    // Check if the list contains any duplicate elements
    checkDuplicates(head);

    // Find the minimum and maximum numbers in the input list

    findMinMax(head);
    return 0;

}



