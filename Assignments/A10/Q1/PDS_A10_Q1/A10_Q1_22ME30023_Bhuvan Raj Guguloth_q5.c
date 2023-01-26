#include <stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

struct Node {
    int data;
    struct Node* next;
};

struct Node* createList(int n, int A[]) {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    int i;
    for (i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = A[i];
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(struct Node* L) {
    struct Node* temp = L;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void even(struct Node* L) {
    struct Node* temp = L;
    struct Node* prev = NULL;
    while (temp != NULL) {
        if (temp->data % 2 != 0) {
            if (prev == NULL) {
                L = temp->next;
                free(temp);
                temp = L;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int A[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    struct Node* L = createList(n, A);
    printf("Original List: ");
    printList(L);
    even(L);
    printf("Modified List (Even numbers only): ");
    printList(L);

    return 0;

}



