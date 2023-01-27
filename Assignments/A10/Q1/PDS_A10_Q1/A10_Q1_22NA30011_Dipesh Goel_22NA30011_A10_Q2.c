#include<stdio.h>
#include<stdlib.h>


struct node {
    int d;
    struct node * next ;
} ;

typedef struct node ELEMENT;
typedef ELEMENT* LINK;

LINK createlist(int n, int A[])
{
    //printf("Inside Create List....\n");
    LINK head = NULL, tail;
    int i;
    if (n!=0) {
        head = (LINK) malloc (sizeof(ELEMENT));
        head->d = A[0];
        tail = head;
        for (i=1; i<n; i++) {
            tail->next = (LINK) malloc(sizeof(ELEMENT));
            tail = tail->next;
            tail->d = A[i];
        }
        tail->next = NULL;
    }
    return head;
}

void printlist (LINK head)
{
    LINK temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->next ==NULL) printf("%d. END OF LIST \n", temp->d); // for the last element
        else printf("%d -> ", temp->d); // for other elements
        temp = temp->next;
    }
}


void even(LINK head)
{
    LINK temp;
    int num;
    num=head->d;
    if (num%2!=0){
        head=head->next;
    }
    temp = head;
    while(temp->next!=NULL)
    {
        int num;
        num=(temp->next)->d;
        if (num%2!=0 && temp->next->next != NULL) {
            (temp->next)=(temp->next->next);
        }

        temp=temp->next;
    }
    printlist(head);

}


int main()
{
    int A[10];
    int i;
    for(i=0;i<10;i++){
        int n;
        //printf("Taking Input...\n");
        //c=getchar();a=getchar();
        scanf("%d",&n);
        if (n==-1) break;
        else A[i]=n;
    }
    //printf("i = %d",i);
    LINK head;
    head = createlist(i,A);
    printlist(head);
    even(head);
    //printlist(head);

}
