#include<stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
}*head;

// Function to check if the linked list is sorted in ascending or descending order

void checkSorted(struct Node* head) {
    struct Node* current = head;
    int isAscending = 0, isDescending = 0;

    // Check if the list is sorted in ascending order

    while (current->next != NULL) {
        if (current->data <= current->next->data) {
            isAscending = 1;
        }
        else {
           isAscending = 0;
            break;
        }
        current = current->next;
    }

    if (isAscending) {

        printf("The input list L is in ascending order.\n");

        return;

    }
    // Check if the list is sorted in descending order

    current = head;
    while (current->next != NULL) {
    if (current->data >= current->next->data) {
        isDescending = 1;
        }
      else{
         isDescending = 0;
         break;
          }
        current = current->next;
        }
    if (isDescending) {
        printf("The input list L is in descending order.\n");
      }
   else {
        printf("The input list L is not sorted.\n");
        }

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
    insert(3);
    insert(5);
    insert(7);
    insert(9);


    // Check if the list is sorted

    checkSorted(head);


    return 0;

}



