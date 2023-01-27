#include <stdio.h>
#include <stdlib.h>

/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

struct Node {
    int data;
    struct Node* next;
};

struct Node* createList(int n) {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int i;
    for (i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
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

struct Node* unionList(struct Node* L1, struct Node* L2) {
    struct Node* L = NULL;
    struct Node* tail = NULL;
    while (L1 != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L1->data;
        newNode->next = NULL;
        if (L == NULL) {
            L = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        L1 = L1->next;
    }
    while (L2 != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L2->data;
        newNode->next = NULL;
        if (L == NULL) {
            L = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        L2 = L2->next;
    }
    return L;
}
struct Node* intersectionList(struct Node* L1, struct Node* L2) {
    struct Node* L = NULL;
    struct Node* tail = NULL;
    while (L1 != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L1->data;
        newNode->next = NULL;
        if (L == NULL) {
            L = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        L1 = L1->next;
    }
    while (L2 != NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L2->data;
        newNode->next = NULL;
        if (L == NULL) {
            L = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        L2 = L2->next;
    }
    return L;

}

int main() {

    struct Node* L1 = createList(5);

struct Node* L2 = createList(6);
struct Node* L_union = unionList(L1, L2);
struct Node* L_intersection = intersectionList(L1, L2);

printf("L (Union): ");
struct Node* temp = L_union;
while (temp != NULL) {
    printf("%d, ", temp->data);
    temp = temp->next;
}
printf("\n");

printf("L (Intersection): ");
temp = L_intersection;
while (temp != NULL) {
    printf("%d, ", temp->data);
    temp = temp->next;
}
printf("\n");

return 0;
}



