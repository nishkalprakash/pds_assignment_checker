// Code creator: Bhagoti (bhagotimahala@kgpian.iitkgp.ac.in)

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the front of the linked list
void addFront(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to reverse the linked list
void reverse(Node** head) {
    Node *prev = NULL, *current = *head, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf("->");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to check if the linked list is a palindrome
int isPalindrome(Node* head) {
    Node *slow = head, *fast = head, *prevSlow = NULL;
    Node *secondHalf, *midNode = NULL;
    int result = 1;

    if (head != NULL && head->next != NULL) {
        // Use fast and slow pointers to reach the middle of the list
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prevSlow = slow;
            slow = slow->next;
        }

        // If there are odd elements, skip the middle element
        if (fast != NULL) {
            midNode = slow;
            slow = slow->next;
        }

        secondHalf = slow;
        prevSlow->next = NULL; // NULL terminate the first half
        reverse(&secondHalf);  // Reverse the second half

        // Compare the two halves
        result = compareLists(head, secondHalf);

        // Reconstruct the original list
        reverse(&secondHalf);
        if (midNode != NULL) {
            prevSlow->next = midNode;
            midNode->next = secondHalf;
        } else {
            prevSlow->next = secondHalf;
        }
    }
    return result;
}

// Function to compare two linked lists
int compareLists(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 && temp2) {
        if (temp1->data != temp2->data) {
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return (temp1 == NULL && temp2 == NULL);
}

int main() {
    Node* head = NULL;
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store each digit in the linked list from left to right
    int temp = number;
    if (temp == 0) {
        addFront(&head, 0);
    } else {
        while (temp > 0) {
            addFront(&head, temp % 10);
            temp /= 10;
        }
    }

    printf("Original number in linked list form: ");
    printList(head);

    // Reverse the linked list
    reverse(&head);
    printf("Reversed number in linked list form: ");
    printList(head);

    // Check if palindrome
    if (isPalindrome(head)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
