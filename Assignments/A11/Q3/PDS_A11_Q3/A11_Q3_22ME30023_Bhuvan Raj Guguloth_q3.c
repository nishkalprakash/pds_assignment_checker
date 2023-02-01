#include<stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

struct Node {

    int data;

    struct Node* next;

};


void insert(struct Node** head, int data) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;

    newNode->next = NULL;


    if (*head == NULL) {

        *head = newNode;

        return;

    }


    struct Node* current = *head;

    struct Node* previous = NULL;

    while (current != NULL && current->data < data) {

        previous = current;

        current = current->next;

    }


    if (previous == NULL) {

        newNode->next = *head;

        *head = newNode;

    } else {

        previous->next = newNode;

        newNode->next = current;

    }

}


void printList(struct Node* head) {

    while (head != NULL) {

        printf("%d ", head->data);

        head = head->next;

    }

    printf("\n");

}


int main() {

    struct Node* head = NULL;


    int n, m;
   
    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements of array(ll(n)): ");

    for (int i = 0; i < n; i++) {

        int data;

        scanf("%d", &data);

        insert(&head, data);

    }

    printf("Enter the new value to be inserted: ");

    scanf("%d", &m);

    insert(&head, m);


    printList(head);


    return 0;

}



