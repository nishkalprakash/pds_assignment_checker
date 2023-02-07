10//SEC:14
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
int main()
{int n,m,i;
 struct node*head1,*head2;
 printf("enter the value of n,m:");
 scanf("%d %d",&n,&m);
 int A[n],B[m];
 for(i=0;i<n;i++)
  {printf("enter the values of A:");
   scanf("%d",&A[i]);
  }
for(i=0;i<n;i++)
  {printf("enter the values of B:");
   scanf("%d",&B[i]);
  }
head1=createlist(n,A);
head2=creatlist(m,B);



return 0;
}


