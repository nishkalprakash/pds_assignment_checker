/*
*    section 14
*    Name: Souvik Sarkar
*    Roll no.: 22ME10083
*    Assignment: 10
*    Topic:LINKED LIST
*    Question no.:1
*   
*/
//programme to create union and intersection of two linked list
#include<stdio.h>
#include<stdlib.h>
//Globally Declaration of linked list
struct node{
    int data;
    struct node* next;
};
// function declaration
struct node *createlist(int n){
    struct node *head,*newnode,*temp;
    head=NULL;
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;//Taking the base case of the new node
            temp=newnode;
        }       
    }
    return head;
   

}
void printlist(struct node *l1)
{
    struct node *temp;
    for(temp=l1;(temp!=NULL && (temp->data%2==0));temp=temp->next)
    {
        printf("%d ",temp->data);
    }

}
struct node intersection(struct node *l1, struct node *l2)
{
    struct node *t1,*t2,*l;
    while((t1->next!=NULL)&&(t2->next !=NULL))
    {
        t1=l1;
        t2=l2;
        if(t1->data==t2->data){

            l=(struct node*)malloc(sizeof(struct node));
            l=t1->data;
            l=l->next;
        }
    }
    return l;
}
void main()
{
    // Varriable initialization
    struct node l1,l2,lun,lin;
    int n1,n2;
    printf("Enter the 1st linked List : Total no of elements?\n ");
    scanf("%d",&n1);
    l1=createlist(n1);// calling the function
    printf("Enter the 2st linked List : Total no of elements?\n ");
    scanf("%d",&n2);
    l2=createlist(n2);//calling the function again
    lin=intersection(l1,l2);
    printlist(lin);



}