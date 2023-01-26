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
void check(struct node*I,int n)
{struct node*temp;
 int count1=0,count2=0;
 temp=I;
 while((temp->next)!=NULL)
  {if(temp->data<temp->next->data)
    count1++;
   if(temp->data>temp->next->data)
    count2++;
   temp=temp->next;
  }
 if(count1==(n-1))
  printf("the input is in ascending order\n");
 else if(count2==(n-1))
  printf("the input is in descending order\n");
 else
  printf("list is not sorted\n");
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
check(head,n);

return 0;
}










