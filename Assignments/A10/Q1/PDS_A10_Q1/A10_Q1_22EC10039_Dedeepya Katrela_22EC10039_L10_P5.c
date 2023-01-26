//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
    };
struct node*createlist(int n,int A[])
{int i;
 struct node*temp,*head;
 
 head=(struct node*)malloc(sizeof(int));
 temp=head;
 for(i=0;i<n;i++)
  {if(i<n-1)
    {temp->data=A[i];
     temp->next=(struct node*)malloc(sizeof(int));
     temp=temp->next;}
   if(i==n-1)
    {temp->data=A[i];
     temp->next=NULL;}
  }
return(head);
}
void printlist(struct node*I)
{struct node*temp;
 temp=I;
 while((temp->next)!=NULL)
 {printf("%d ",temp->data);
  temp=temp->next;
 }
 if(temp->next==NULL)
  {printf("%d \n",temp->data);}
}
void even(struct node*I)
{int i;
 struct node*temp;
 temp=I;
 while((temp->next)!=NULL)
 {if(((temp->data)/2)!=0)
   {temp->next=temp->next->next;}
  temp=temp->next;
 }
 printlist(I);
}
int main()
{int n,i;
 struct node*head;
 printf("enter the value of n:");
 scanf("%d",&n);
 int A[n];
 for(i=0;i<n;i++)
  {printf("enter the value:");
   scanf("%d",&A[i]);
  }
head=createlist(n,A);
printlist(head);
even(head); 
return 0;
}










