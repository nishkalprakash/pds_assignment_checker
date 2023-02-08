#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node  *next;
}*first=NULL,*first1=NULL,*first2=NULL;
void create(int a[],int n)
{
    first=(struct node *)malloc(sizeof(struct node));
    struct node *last,*p;
    first->data=a[0];
    first->next=NULL;
    last=first;
    int i;
    for(i=1;i<n;i++)
    {
         p=(struct node *)malloc(sizeof(struct node));
	 last->next=p;
	 p->data=a[i];
	 p->next=NULL;
	 last=p;
    }
} 
void create1(int a[],int n)
{
    first1=(struct node *)malloc(sizeof(struct node));
    struct node *last1,*p1;
    first1->data=a[0];
    first1->next=NULL;
    last1=first1;
    int i;
    for(i=1;i<n;i++)
    {
         p1=(struct node *)malloc(sizeof(struct node));
         last1->next=p1;
         p1->data=a[i];
         p1->next=NULL;
         last1=p1;
    }
}

void create2(int a[],int n)
{
    first2=(struct node *)malloc(sizeof(struct node));
    struct node *last2,*p2;
    first2->data=a[0];
    first2->next=NULL;
    last2=first2;
    int i;
    for(i=1;i<n;i++)
    {
         p2=(struct node *)malloc(sizeof(struct node));
         last2->next=p2;
         p2->data=a[i];
         p2->next=NULL;
         last2=p2;
    }
}
void delete(struct node *p, int n)
{
    int i;
    for(i=0;i<n-2;i++)
    {
       first2=first2->next;
    }
    first2->next=first2->next->next;
}
void rduplicate(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
	{
             if(a[i]==a[j])
	     {
                  delete(first2,j);
	     } 
	} 
    } 
    
}
void display(struct node *p)
{
if(p!=NULL)
{
    printf("%d",p->data);
    display(p->next);
}
}
int main()
{
	int m;
	scanf("%d",&m);
int arr1[m];
int i;
for(i=0;i<m;i++)
{
  scanf("%d",&arr1[i]);

}
int n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{#include <stdio.h>
#include <stdlib.h>
void input1(int *p,int*q)
{
scanf("%d",p);
scanf("%d",q);
}
void create(int *a[],int m,int n)
{
int i,j;
for(i=0;i<n;i++)
    {
         a[i]=(int *)malloc(n*sizeof(int));
    }
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
}
int output(int *a[],int m,int n)
{
    if(n==-1&&m==-1) return 0;
    else
    {
         output(a,m--,n--);
    }
}
int main()
{
int m,n;
input1(&m,&n);
int *arr[m];
create(arr,m,n);
output(arr,m,n);

	return 0;
}
scanf("%d",&arr[i]);
}
int k;
k=m*n;
int arr2[k];
int a,b;
for(i=0;i<n;i++)
{
	int j;
	for(j=0;j<n;j++)
	{
             arr2[i]=arr[i]+arr1[j];
	}

}
create2(arr2,k);
create(arr,n);
create1(arr1,m);
rduplicate(arr2,k);
display(first2);


	return 0;
}
