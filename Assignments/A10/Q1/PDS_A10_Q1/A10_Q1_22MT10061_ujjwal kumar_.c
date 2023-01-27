struct node {
    int data;
    struct node* next;
};

struct node* createlist(int n, int A[]) {
    struct node* head = NULL;
    struct node* current = NULL;
    for (int i = 0; i < n; i++) {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = A[i];
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = new_node;
        }
    }
    return head;
}
void printlist(struct node* head) {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}
void even(struct node* head) {
    struct node* current = head;
    struct node* prev = NULL;
    int count = 0;
    while (current != NULL) {
        count++;
        if (count % 2 == 0) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
        } else {
            prev = current;
        }
        current = current->next;
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    struct node* head = createlist(n, A);
    printf("Original list: ");
    printlist(head);
    printf("\nModified list: ");
    even(head);
    printlist(head);
    return 0;
}