#include <stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */


struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node** head, int data) {
    if (*head == NULL) return;
    struct Node* current = *head;
    struct Node* previous = NULL;
    while (current != NULL && current->data != data) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) return;

    if (previous == NULL) {
        *head = current->next;
        free(current);
    } else {
        previous->next = current->next;
        free(current);
    }
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    int n, m;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in Array: ");
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    printf("Enter the value to be Deleted: ");
    scanf("%d", &m);
    deleteNode(&head, m);
    printList(head);

    return 0;
}



