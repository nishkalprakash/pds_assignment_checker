/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 11
 Description : write a program to insert a value from an already existing linked list

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


link2 create_node(int val)
{
    link2 newp;
    newp=(link2)malloc(sizeof(Element));
    newp->d=val;
    return newp;
}

link2 insert(int value,link2 ptr)
{
    link2 prev,first,newp;
    newp=create_node(value);
    if(ptr==NULL||value<=ptr->d)
    {
        newp->next=ptr;
        return newp;
    }
    else{
        first=ptr;
        prev=ptr;
        ptr=ptr->next;
        while(ptr!=NULL&&value>ptr->d)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=newp;
        newp->next=ptr;
        return first;
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
	
	k=insert(m,k);
	if(flag==0){
	printf("Output after inserting %d : \n ",m);
	print_list(k);
	printf("\n");
	}
}
