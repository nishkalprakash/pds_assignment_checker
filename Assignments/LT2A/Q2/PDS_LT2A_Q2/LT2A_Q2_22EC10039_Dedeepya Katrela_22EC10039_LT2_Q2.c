//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//LAB TEST 2
//DESCRIPTION:PROGRAM TO CHECK POINTS
 
#include<stdio.h>
#include<stdlib.h>
 struct list{
    int data;
    struct list *next;
   };
typedef struct list list;
list* createlist(int N)
{list *temp,*head;
 int i=0;
 head=(list*)malloc(sizeof(list));
 temp=head;
 printf("enter %d values of list:",N);
 for(i=0;i<N-1;i++)
  {
   scanf("%d",&temp->data);
   temp->next=(list*)malloc(sizeof(list));
   temp=temp->next;}
 if(i==N-1)
  {
   scanf("%d",&temp->data);
   temp->next=NULL;}
  
return head;
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
list* createlistnew(int N,list *head1,list *head2)
{list *temp,*head,*temp1,*temp2;
 int i=0;
 head=(list*)malloc(sizeof(list));
 temp=head;
 temp1=head1;
 temp2=head2;
 for(i=0;i<N-1;i++)
  {if(temp1!=NULL)
    {if(temp2!=NULL)
      {temp->data=(temp1->data)+(temp2->data);
       temp2=temp2->next;}
    if(temp2==NULL)
      {temp2=head2;
       temp1=temp1->next;}
       temp->next=(list*)malloc(sizeof(list));
       temp=temp->next;
    }
  }
    if(i==N-1)
      {temp->data=(temp1->data)+(temp2->data);
        temp->next=NULL;}
    
   
 return head;
} 




int main()
{list *head1,*head2,*head;
 int m,n;
 printf("enter the value of m&n");
 scanf("%d %d",&m,&n);
 head1=createlist(m);
 head2=createlist(n);
 head=createlistnew(m*n,head1,head2);
 printf("L1=");
 printlist(head1);
 printf("\n+\n");
 printf("L2=");
 printlist(head2);
 printf("\n=\n");
 printf("L=");
 printlist(head);
 
 
return 0;
}

