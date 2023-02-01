/* 
    Section 14
    Roll no : 22EC10019
    Name : Arya Choudhuri
    Assignment No : 11
    Description : Program to modify linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list* link;
};

struct list* createlist( struct list* head , int n)
{
    struct list* ptr = head;

    printf("Enter elements:\n");

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &ptr->data);
        ptr -> link = (struct list*)malloc(sizeof(struct list));

        if ( i == n-1)
            ptr -> link = NULL;
        else
            ptr = ptr -> link;
    }
    return head;
}

struct list* insert_head( struct list* head , int m)
{
    struct list* ptr = (struct list*)malloc(sizeof(struct list));
    ptr -> data = m; 
    ptr -> link = head;
    head = ptr ;
    return head;
}

struct list* insert( struct list* head , int m)
{
    struct list* ptr = (struct list*)malloc(sizeof(struct list));
    ptr -> data = m; 

    int flag = 0;
    struct list* ptr1  = head;
    while (ptr1 -> link != NULL)
    {
        int f1 = ptr1 -> data;
        int f2 = ptr1 -> link -> data;

        if ( (m>=f1) && (m<=f2))
        {
            ptr -> link = ptr1 -> link;
            ptr1 -> link = ptr ;
            flag++; 
            break;
        }
        ptr1 = ptr1 -> link;
    }

    if(flag == 0 )
    {
        struct list* ptr = (struct list*)malloc(sizeof(struct list));
        ptr -> data = m; 

        ptr1 -> link = ptr ;
        ptr -> link = NULL;
        return head;
    }

    return head;
}

void printlist ( struct list * head)
{
    struct list* ptr = head;

    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    int n;

    printf("Enter number of elements in list:");
    scanf("%d" , &n);

    struct list* head = (struct list*)malloc(sizeof(struct list));
    head = createlist( head , n );
    
    printlist(head);
    int m;

    printf("\nEnter new value to be inserted: ");
    scanf("%d" , &m);

    if ( m <= head -> data)
        head  = insert_head( head , m);
    else
        head = insert (head , m ); 

    printf("\n");
    printf("Ouput after inserting:\n");
    printlist( head ); 
    return 0;
}