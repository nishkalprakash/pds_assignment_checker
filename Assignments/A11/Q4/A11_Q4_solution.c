#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

void printList(node* head){
    node* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}


/**
 * @brief Create a linked list
 * 
 * @param n size of the linked list
 * @param arr includes the element of the linked list
 * @return pointer to the head of the linked list
 */
node* createList(int n, int *arr){
    node* head, *temp;
    for(int i=0; i<n;i++){
        if(i==0){
            head = (node*)malloc(sizeof(node));
            head->data = arr[i];
            temp = head;
        }
        else{
            temp->next = (node*)malloc(sizeof(node));
            temp->next->data = arr[i];
            temp = temp->next;
        }
        if(i==n-1){
            temp->next = NULL;
        }
    }
    return head;
}


/**
 * @brief delete an element from a linked list and print the remaining list
 * 
 * @param m element to be deleted
 * @param head head of the linked list
 */
void deleteElement(int m, node* head){
    node* temp = head, *prev = head;
    while(temp!=NULL){
        if(temp->data==m){
            //when temp is the only node
            if(temp==head && temp->next==NULL){
                free(temp);
                printf("\nElement deleted. The list is now empty.");
                return;
            }

            // when temp is the first node
            if(temp==head){
                head = temp->next;
                free(temp);
                printf("\nElement deleted. The new list is: ");
                printList(head);
                return;
            }

            prev->next = temp->next;
            free(temp);
            printf("\nElement deleted. The new list is: ");
            printList(head);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    printf("\n%d does not exist in the list.",m);
}


int main(){
    printf("Enter n: ");
	int n;
    scanf("%d",&n);

    printf("\nEnter n elements: ");
    int *arr = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element to be deleted: ");
    int m;
    scanf("%d",&m);

    node *head = createList(n,arr);
    deleteElement(m,head);
	return 0;
}