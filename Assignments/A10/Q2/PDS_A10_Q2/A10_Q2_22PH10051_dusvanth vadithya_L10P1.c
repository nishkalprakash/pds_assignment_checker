#include<stdio.h>

#include<stdlib.h>


struct Node{

    int data;

    struct Node* next;

};


void check_sorted(struct Node* head) {

    if(head == NULL || head->next == NULL) {

        printf("The input list is empty or has only one element.");

        return;

    }

    int is_ascending = head->data <= head->next->data;

    struct Node* current = head->next;

else {

            if(current->data < current->next->data) {

                printf("The input list is not in sorted order.");

                return;

            }

        }

        current = current->next;

    }

    if(is_ascending) {

        printf("The input list is in ascending order.");

    }

    else {

        printf("The input list is in descending order.");

    }

}


int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;

    head->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->data = 3;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->data = 5;

    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->data = 7;

    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->next->data = 9;

    head->next->next->next->next->next = NULL;


    check_sorted(head);

    return 0;

}

    while(current && current->next) {

        if(is_ascending) {

            if(current->data > current->next->data) {

                printf("The input list is not in sorted order.");

                return;

            }

        }

        else {

            if(current->data < current->next->data) {

                printf("The input list is not in sorted order.");

                return;

            }

        }

        current = current->next;

    }

    if(is_ascending) {

        printf("The input list is in ascending order.");

    }

    else {

        prin

else {

            if(current->data < current->next->data) {

                printf("The input list is not in sorted order.");

                return;

            }

        }

        current = current->next;

    }

    if(is_ascending) {

        printf("The input list is in ascending order.");

    }

    else {

        printf("The input list is in descending order.");

    }

}


int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;

    head->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->data = 3;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->data = 5;

    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->data = 7;

    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->next->data = 9;

    head->next->next->next->next->next = NULL;


    check_sorted(head);

    return 0;

}
tf("The input list is in descending order.");

    }

}


int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;

    head->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->data = 3;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->data = 5;

    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->data = 7;

    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->next->data = 9;

    he

else {

            if(current->data < current->next->data) {

                printf("The input list is not in sorted order.");

                return;

            }

        }

        current = current->next;

    }

    if(is_ascending) {

        printf("The input list is in ascending order.");

    }

    else {

        printf("The input list is in descending order.");

    }

}


int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;

    head->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->data = 3;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->data = 5;

    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->data = 7;

    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));

    head->next->next->next->next->data = 9;

    head->next->next->next->next->next = NULL;


    check_sorted(head);

    return 0;

}
ad->next->next->next->next->next = NULL;


    check_sorted(head);

    return 0;

}
