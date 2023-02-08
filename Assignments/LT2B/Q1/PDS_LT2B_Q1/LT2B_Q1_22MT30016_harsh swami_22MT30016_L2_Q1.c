#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct list
{
        char data;
        struct list* next;
}set;

struct list*(init (a))
 {
    struct list*ptr;
   
 }
struct list* createlist(int a[100],int n)
{
 struct list*head=NULL;
 struct list*tail=NULL;
 struct list*ptr=NULL;
 for(int i=0;i<n;i++)

{
   if(head==NULL)
   {
     ptr=init(a[i]);
     head=ptr;
     tail=head;
   }
   else
   {
    ptr=init(a[i]);
    tail->next=ptr;
    tail=ptr;
    }
}
return head;
}
void printlist(struct list *head)
{
  if(head==NULL)
  printf("list is empty");
  while(head!=NULL)
  {
    printf("%d",head->data);
   head=head->next;
  }
}

int main()
{
 struct list*head;
 struct list*head1;
 int n;
 int m;
 int i;
 printf("enter string L1:");
 scanf("%s",&n);
 char a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 head=createlist(a,n);
 printf("enter string L2:");
 scanf("%s",&m);
 return 0;
}
 

 
 
  
