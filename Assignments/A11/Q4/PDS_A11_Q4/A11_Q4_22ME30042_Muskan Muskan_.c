/* Section 14
   Muskan
   Lab- 11
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<stdlib.h>
#define max 100
 
typedef struct{
               int data,i;
               node *next;
             }node;

node *createlist(int n,int a[])
{
node *head,*ptr;
node *head=(node*)malloc(sizeof(node));
ptr=head;

for(i=0;i<n;i++)
{
ptr->data=a[i];
node *next=(node*)malloc(sizeof(node));
ptr=pyr->next;
}
ptr->data=a[n-1];
ptr->next=null;
return head;
}

LINK create_node(int val)
{
LINK newp;
newp = (LINK) malloc (sizeof (ELEMENT));
newp -> data = val;
return (newp);
}


LINK insert (int value, LINK ptr)
{ LINK newp, prev, first;
newp = create_node(value);
if (ptr == NULL || value <= ptr -> data)
{ // insert as new first node
newp -> next = ptr;
return newp; // return pointer to first node
}
else { // insert in the middle (not first element)
first = ptr; // remember start
prev = ptr;
ptr = ptr-> next;
while (ptr != NULL && value > ptr -> data)
{ prev = ptr; ptr = ptr -> next; }
prev -> next = newp; // link in
newp -> next = ptr; //new node
return first;


void printlist(node * I)
{
    if(I==NULL){
        printf("\nEMPTY LIST\n");
    }
    while(I!=NULL){
        printf("%d ",I->data);
        I=I->next;
    }
    printf("\n");
}
node *insert(node *head,int value)
node *ptr=(node*)malloc(sizeof(node));
node *p=head;
}


int main()
{
int n,addnum,head;
int a[max];
node*head;
printf("Enter n:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter number u want to insert in array\n");
scanf("%d",addnum);
head=createlist(n,a);
return 0;
}