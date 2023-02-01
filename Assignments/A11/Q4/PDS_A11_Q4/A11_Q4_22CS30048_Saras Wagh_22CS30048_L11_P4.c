#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
int main()
{
	int n,m,j;
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
	printf("Enter the value that you wants to delete:\n");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(m==ptr->data)
		{
			j=i;
			//printf("%d ",j);
			break;
		}
		ptr=ptr->link;
	}
	ptr=head;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		
			if(m==(ptr->data)){
            
            	head=head->link;
            	break;
            }
         if(i==n-2)
         {
         if(m==(ptr->link->data))   
         ptr->link=NULL;
     break;
         }
         if(i==j-1)
         ptr->link=ptr->link->link;
        ptr=ptr->link;
 


	}
	ptr=head;

	while(ptr)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;	
	}
	return 0;
}
