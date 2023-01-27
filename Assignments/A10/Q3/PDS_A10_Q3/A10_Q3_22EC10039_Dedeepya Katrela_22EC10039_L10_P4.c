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
void maxmin(struct node*I)
{struct node*temp;
 int min,max;
 temp=I;
 min=temp->data;
 max=temp->data;
 while((temp->next)!=NULL)
 {if((temp->data)<min)
  min=temp->data;
  if((temp->data)>max)
  max=temp->data;
  temp=temp->next;
  }
if(temp->next==NULL)
  {if(temp->data<min)
   min=temp->data;
   if((temp->data)>max)
   max=temp->data;}
printf("minimum number is %d",min);
printf("maximum number is %d",max);
}  

int main()
{int n,i;
 struct node*head;
 printf("enter the value of n:");
 scanf("%d ",&n);
 int A[n];
 for(i=0;i<n;i++)
  {printf("enter the value");
   scanf("%d",&A[i]);
  }
head=createlist(n,A);
maxmin(head);



return 0;
}

