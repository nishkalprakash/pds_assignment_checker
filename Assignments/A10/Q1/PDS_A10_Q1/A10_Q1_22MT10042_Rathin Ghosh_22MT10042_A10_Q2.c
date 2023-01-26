#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}
struct node *createlist(int n,int A[])
{
struct node *head,*tail,*temp;
head=(struct node *)malloc(sizeof(struct node));
head->data=A[0];
tail=head;
int i;
for(i=1;i<n;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->data=A[i];
tail->next=temp;
tail=temp;
}
tail->next=NULL;
return head;
}
void printlist(struct node* I)
{
struct node *list= I;
while(list !=NULL)
{
printf("%d",list->data);
if (list->next==NULL)
{
printf("End");
}
list=list->next;
}
}
/*void even(struct node* I)
{
struct node *prev,*temp,*head;
head = I;
while(I!=NULL(
{
printf("%d",I->data);
if(I->data)
{
*/
int main()
{
int n,A[10];
printf("Enter no. of elements : ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<10;i++)
{
scanf("%d",&A[i]);

}
struct node *list=createlist(n,A);
printlist(list);
return 0;
}



