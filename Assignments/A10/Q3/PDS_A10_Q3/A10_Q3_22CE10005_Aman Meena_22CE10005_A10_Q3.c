
/*
Section 14

Roll No : 22CE10005

Name : #Aman Meena#

Assignment No : 9

Description :TO find the maximum minimum and check the duplicate*/

#include<stdio.h>

#include<stdlib.h>

struct node{

int data;

struct node*next;

}

void insert  {struct node**head,int item)

{

  struct node*temp=(struct node*)malloc(sizeof(struct node));

temp->data=item;

temp->next+head;

*head=temp;

}

int countnode(struct node*head)

{

int count  =0;

while(head->next!= NULL) {

struct node*ptr=head->next;

while(ptr!-NULL)

{

if(head->data==ptr->data)

{

 count++

break;

ptr =ptr->next;

}

return count;

}

int main()

{

int n,i;

struct node *head=NULL;

int a[10];

printf("Enter the number of elements\n");

scanf("%d",&n);

printf("Enter the elements\n");

for(i=0;i<n;i++)

scanf("%d",&a[i]);

insert (&head,a[i]);

}

int ans=countnode(head);

printf("count=%d",ans);

return 0;

}

}

}
}

}

}
