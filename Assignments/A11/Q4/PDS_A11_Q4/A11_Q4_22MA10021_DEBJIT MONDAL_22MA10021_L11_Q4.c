#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
}*first=NULL;
struct node *create(int *a,int n)
{
    struct node *last,*p;
    first->data=a[0];
    first->next=NULL;
    last=first;
    first=last;
    int i;
    for(i=1;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
	last->next=p;
	p->data=a[i];
	p->next=NULL;
	last=p;
    }
    return first;

}
struct node *delete(struct node *a,int m,int n)
{
    int i;
    if(a->data==m) free(a);
    else{
    for(i=1;i<n;i++)
    {
         if(a->next->data==m) 
	 {
              a->next=a->next->next;
	 } 
    }
    }
    return a;

}
struct node *display(struct node *a)
{
    if(!a) return NULL;
    else {
         printf("%d",a->data);
	 display (a->next);
    }
}



int main()
{
    int n,i,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
    scanf("%d",&m);
   // delete(first,m,n);
    display(first);


}
