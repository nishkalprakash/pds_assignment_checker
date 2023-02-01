/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 11
 Description : write a program to delete a value from an already existing linked list

 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long

struct list2
{
    int d;
    struct list2 *next;
    
};
int flag=0;
typedef struct list2 Element;
typedef Element *link2;
link2 delete_item(int val,link2 ptr)
{
    link2 prev,first;
    
    first=ptr;
    if(ptr==NULL){
        return NULL;
    }
    else if(val==ptr->d)
    {
        prev=ptr;
        ptr=ptr->next;
        
        first->next=NULL;
        free(first);
        return ptr;
    }
    else
    {
        prev=ptr;
        ptr=ptr->next;
        while(ptr!=NULL&&val>ptr->d){
            prev=ptr;
            ptr=ptr->next;
            
        }
        if(ptr==NULL||val!=ptr->d)
        {
            printf("%d does not exist",val);
            flag=1;
            return first;
        }
        else{
            prev->next=ptr->next;
            ptr->next=NULL;
            free(ptr);
            return first;
        }
        
    }
    
}
link2 createlist(int n,int A[])
{
    link2 head=NULL;
    link2 tail;
    head=(link2)malloc(sizeof(Element));
    head->d=A[0];
    tail = head;
    for(int i=1;i<n;i++)
    {
        tail->next=(link2)malloc(sizeof(Element));
        tail=tail->next;
        tail->d=A[i];
    }
    tail->next=NULL;
    return head;
}
void print_list(link2 head)
{
    link2 temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp==NULL)
        {
            break;
        }
        else{
            printf("%d ",temp->d);
            temp=temp->next;
            
        }
    }
}
int main()
{
	int n;printf("n=");scanf("%d",&n);int a[n];
	printf("LL[n]= ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	link2 k=createlist(n,a);

	int m; printf("m=");scanf("%d",&m);
	
	k=delete_item(m,k);
	if(flag==0){
	printf("Output after deleting %d = ",m);
	print_list(k);
	}
}


