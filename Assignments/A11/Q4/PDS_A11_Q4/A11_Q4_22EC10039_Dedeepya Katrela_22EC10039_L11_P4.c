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
struct list* delete(struct list* head,int m,int n)
{struct list* temp,*prev;
 int count=0;
 temp=head;
 if(m!=head->data)
   {while(m!=temp->data)
     {prev=temp;
      temp=temp->next;
       count++;}
    if(count==n)
     return 0;
    if(count<n)
     {prev->next=temp->next;
      free(temp);
       return head;}
    }
  if(m==head->data)
   {head=temp->next;
    free(temp);
    return head;}
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
  newhead=delete(head,m,n);
  if(newhead==0)
  printf("%d is not in the list",m);
  if(newhead!=0)
  {printf("output after deleting:\n");
   printlist(newhead);}
return 0;
}
  




