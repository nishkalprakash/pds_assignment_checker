/*
*    section 14
*    Name: Souvik Sarkar
*    Roll no.: 22ME10083
*    Assignment: 10
*    Topic:LINKED LIST
*    Question no.:3
*   
*/
//programme to
#include<stdio.h>
#include<stdlib.h>
//Globally Declaration of linked list
struct node{
    int data;
    struct node* next;
};

// function defining
struct node *createlist(int n){
    struct node *head,*newnode,*t;
    head=NULL;
    for(int i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head==NULL)
        {   
            // first node
            head=newnode;
            t=head;
            //return head;
        }
        else
        {

            t->next=newnode;//Taking the base of the new node
            //head=t;
            t=newnode;
        }       
    }

    return head;
}
//Function definig   
void checkdescen(struct node *l, int n)
{
    struct node *temp;
    int i,f=0,max;
    temp=l;
    max=temp->data;
    for(i=1;i<n;i++){
        if(max>(temp->next)){
            max=temp->data;
            f++;
            }
        else
        {
            printf("\nNot descending order\n");
            f--;
            break;
        }
    }
    if(f==(n-1))
        printf("\nIt is descending order\n");
}   

void checkascen(struct node *l, int n)
{
    struct node *temp;
    in/*
*    section 14
*    Name: Souvik Sarkar
*    Roll no.: 22ME10083
*    Assignment: 10
*    Topic:LINKED LIST
*    Question no.:2
*   
*/
//programme to maxm and min

void main()
{

}t i,f=0,min;
    temp=l;   
    min=temp->data;
    for(i=1;i<n;i++){
        if(min<(temp->next)){
            min=temp->data;
            f++;
            }
        else
        {
            printf("\nNot ascending order\n");
            f--;
            break;
        }   
    }
    if(f==(n-1))
        printf("\nIt is ascending order\n");
}
    //else
        //printf("\nIt is not sorted\n");
//}   

void main()
{
    // Varriable initialization
    struct node *l1;
    int n1;
    printf("Enter the linked List : Total no of elements?\n ");
    scanf("%d",&n1);
    l1=createlist(n1);

    struct node *temp;
    for(temp=l1;temp!=NULL;temp=temp->next)
    {
        printf("%d ",temp->data);
    }
    //calling fnction
    checkascen(l1,n1);
    checkdescen(l1,n1);
   
}