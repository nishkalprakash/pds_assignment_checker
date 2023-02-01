#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
int main()
{
	int n,m;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the element no. %d\n",i+1);
		scanf("%d",&a[i]);
	}
	struct node *head,*ptr;
	head=(struct node*)malloc(sizeof(struct node));
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	for(int i=0;i<n;i++)
	{
	   ptr->data=a[i];
	   if(i<n-1)
	   ptr->link=(struct node*)malloc(sizeof(struct node));
	   ptr=ptr->link;  
	}
	ptr=NULL;
	ptr=head;
	printf("Enter the value that you wants to insert:\n");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if(m<(ptr->data))
            {
            	struct node*ptr1=malloc(sizeof(struct node));
            	ptr1->data=m;
            	ptr1->link=head;
                head=ptr1;
            }
		}
		else if(i==n-1)
		{
			if(m>(ptr->data))
			{
				while(ptr->link!=NULL)
					ptr=ptr->link;
				struct node*ptr1=malloc(sizeof(struct node));
            	ptr1->data=m;
            	ptr->link=ptr1;
            	ptr1->link=NULL;
			}
		}
		else if(i>0&&i<n-1)
		{
			if(   (m>(ptr->data))  &&  (m<(ptr->link->data))  ){
			struct node*ptr1=malloc(sizeof(struct node));
            	ptr1->data=m;
            	ptr1->link=ptr->link;
            	ptr->link=ptr1;
            	printf("%d ",m);
            }
        }
        ptr=ptr->link;
	}
	
	while(ptr)
	{
       printf("%d ",ptr->data);
       ptr=ptr->link;
	}
	return 0;
}