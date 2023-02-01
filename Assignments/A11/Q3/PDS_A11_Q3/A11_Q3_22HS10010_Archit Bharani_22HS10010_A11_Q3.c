#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node ELEMENT;
typedef ELEMENT *LINK;

LINK createlist(int n, int A[])
 {
 
  LINK head,tail; 
  head=(LINK)malloc(sizeof(ELEMENT));
  head->data =A[0];
  tail=head;
  head->next=NULL;
  for(int i=1;i<n;i++)
  {
    tail->next=(LINK)malloc(sizeof(ELEMENT));
    tail=tail->next;
    tail->data=A[i];
  }
 tail->next=NULL;
return head;
}

LINK create_node(int val)
{
LINK new;
new=(LINK)malloc(sizeof(ELEMENT));
new->data=val;
return (new);
}

LINK Insert(int value,  LINK ptr){ 
   LINK newp, prev, first;
newp= create_node(value);
if (ptr== NULL || value <= ptr-> data)
{
newp-> next = ptr;
return newp;
} 
else {
first = ptr;   
prev= ptr;
ptr= ptr-> next; 
while (ptr!= NULL  && value > ptr-> data)
{
prev= ptr; 
ptr= ptr-> next;
}
prev-> next = newp;  
newp-> next = ptr;    
return first;
}
}


void printlist(LINK head)
{
LINK ptr;
ptr=(LINK)malloc(sizeof(ELEMENT));
ptr=head;
while(ptr->next!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
printf("%d",ptr->data);
}


int main()
{
int n,A[100],m;
printf("Enter number of integers ");
scanf("%d",&n);
printf("Enter the integers in ascending order");
for(int i=0;i<n;i++)
 {
   scanf("%d",&A[i]);
 }
printf("Enter the value which you want to insert ");
scanf("%d",&m);
LINK head=createlist(n,A);
head=Insert(m,head);
printlist(head);
return 0;
}



