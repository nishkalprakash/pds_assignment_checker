//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:11
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
struct list{
       int data;
       struct list* next;
     };

struct list* createlist(int n)
{struct list *head,*temp;
 int i,p;
 head=(struct list*)malloc(sizeof(struct list));
 temp=head;
   for(i=0;i<n;i++)
  {if(i<n-1)
    {printf("enter the value:");
     scanf("%d",&p);
     temp->data=p;
     temp->next=(struct list*)malloc(sizeof(struct list));
     temp=temp->next;}
   if(i==n-1)
    {printf("enter the value:");
     scanf("%d",&p);
     temp->data=p;
     temp->next=NULL;}
  }
return(head);

 
}
void printlist(struct list* head)
{
 struct list *temp;
 temp=head;
 while((temp->next)!=NULL)
 {printf("%d ",temp->data);
  temp=temp->next;
 }
 if(temp->next==NULL)
  {printf("%d \n",temp->data);}
}
struct list* insert(struct list* head,int n)
{struct list* temp,*prev,*new;
 temp=head;
 if(n>head->data)
 {while(temp!=NULL)
  {if(n>temp->data)
    {prev=temp;
     temp=temp->next;}
   if(n<temp->data)
     {new=(struct list*)malloc(sizeof(struct list));
      new->data=n;
      new->next=NULL;
      prev->next=new;
      new->next=temp;
      return head; }
  }
 }
if(n<head->data)
 {new=(struct list*)malloc(sizeof(struct list));
  new->data=n;
  new->next=head;
  head=new;
  return head;
 }
}    
 
int main()
{ int n,m;
  struct list* head,*newhead;
  printf("enter the value of n:");
  scanf("%d",&n);
  head=createlist(n);
  printlist(head);
  printf("enter the value of m:");
  scanf("%d",&m);
  newhead=insert(head,m);
  printf("\noutput after inserting %d\n",m);
  printlist(newhead);

return 0;
}







  
  
