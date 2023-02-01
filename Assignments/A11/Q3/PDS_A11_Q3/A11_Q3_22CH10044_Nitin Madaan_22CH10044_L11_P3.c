#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
 struct node *link;
};




int main()

{

	int n,N;
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
 struct node* ptr1;
 ptr = head;
 for (int i = 0; i < n; i++)
 {
 	ptr->data=arr[i];
 	if(i<n-1)
 	ptr->link=(struct node*)malloc(sizeof(struct node));
 	ptr=ptr->link;
 }

 ptr=NULL;
 ptr=head;






printf("Enter the value which you want to insert\n");
scanf("%d",&N);

for (int i = 0; i < n; i++)

{
	if(i==0)
	{
		if(N<(ptr->data))
		{
			struct node*ptr1=malloc(sizeof(struct node));
			ptr1->data=N;
			ptr1->link=head;
			head=ptr1;
			break;
		}
	}

	else if(i==n-1)
	{
		if(N>(ptr->data))
		{
			while(ptr->link!=NULL)
				ptr=ptr->link;
			struct node *ptr1=malloc(sizeof(struct node));
			ptr1->data=N;
			ptr->link=ptr1;
			ptr1->link=NULL;
			break;
		}
	}


	if(  (N>(ptr->data)) && (N<(ptr1->link->data)) )
	{
		struct node *ptr1= malloc(sizeof(struct node));
		ptr1->data=N;
		ptr1->link=ptr->link;
		ptr->link=ptr1;
	}

	ptr = ptr->link;
}
ptr = head;


while(ptr)
{
	printf("%d",ptr->data);
	ptr=ptr->link;
}





return 0;

}








