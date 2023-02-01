#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
 struct node *link;
};

void delete(struct node  **ptr,int position)
{
	struct node*ptr1= *ptr;
	struct node*ptr2=*ptr;
  if(ptr==NULL)
  {
  	printf("List is empty");
  }
  else if(position == 1)
  {
  	*ptr=ptr1->link;
  	free(ptr1);
  	ptr1 = NULL;
  }
  else
  {



  	while(position !=1)
  {
  	ptr2=ptr1;
  	ptr1=ptr1->link;
  }

ptr2->link=ptr1->link;
free(ptr1);
ptr1=NULL;
}

}



int main()

{
	struct node*ptr3;
	struct node *ptr1;
	struct node *ptr2;

	int n,N,c=0,p;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		printf("Enter the element %d:-  \n",i+1);
		scanf("%d",&arr[i]);
	}
struct node*head=malloc(sizeof(struct node));
 struct node *ptr=malloc(sizeof(struct node));
 ptr = head;
 for (int i = 0; i < n; i++)
 {
 	ptr->data=arr[i];
 	ptr->link=(struct node*)malloc(sizeof(struct node));
 	ptr=ptr->link;
 }

 ptr=NULL;
 ptr=head;



 printf("Enter the value you want to delete\n");
 scanf("%d",&N);

for(int i = 0; i < n; i++)
{
	if(arr[i]!=N)
	{
       c++;
	}

	if(arr[i]==N)
	{
       p=i;
	}
}
if(c==n)
{
	printf("%d not exist",N);
}


delete(&ptr,p+1);
ptr3=ptr;


// while(ptr3->link!=NULL)
// {
// 	printf("%d",ptr3->data);
// 	ptr3 = ptr3->link;
// }


return 0;

}