/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:10
Discription :
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct list{
		
	int d;
	struct list* next;

}Element;
Element* reading(int n)
{
	Element *head=NULL,*tail,*tmp;
	if(n==0)
		printf("\n");
	else{
		head=(Element*)malloc(sizeof(Element));
		int x;
		scanf("%d",&x);
		(head->d)=x;
		tail=head;
		for(int i=1;i<n;i++)
		{
			tmp=(Element*)malloc(sizeof(Element));
			scanf("%d",&x);
			(tmp->d)=x;
			tmp->next=0;
			tail->next=tmp;

			tail=tail->next;
		}
	tail->next=NULL;
	}

	return head;
}
int* array(Element *head,int n)
{
	static int arr[20];
	for(int i=0;i<n;i++)
		{
		arr[i]=head->d;
		head=head->next;
		}
	return arr;		
}
void duplicates(int *ptr,int n)
{
	for(int i=0;i<n;i++)
		{
		int count=0;
		for(int j=0;j<n;j++)
			{
			if(ptr[i]==ptr[j])
				count++;
			}
		if(1<count)
			{
					printf("%d",ptr[i]);
			}
		}
	return;
}
int main()
{
	int n;
	scanf("%d",&n);
	int* ptr;
	Element* t;
	t=reading(n);
	ptr=array(t,n);
	duplicates(ptr,n);
	
	return 0;
}				
























