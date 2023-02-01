/* Section 14
   Muskan
   Lab- 11
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<stdlib.h>
#define max 100
 
typedef struct{
               int data,i;
               node *next;
             }node;
node *createlist(int n,int a[])
{
node *head,*ptr;
node *head=(node*)malloc(sizeof(node));
ptr=head;

for(i=0;i<n;i++)
{
ptr->data=a[i];
node *next=(node*)malloc(sizeof(node));
ptr=pyr->next;
}
ptr->data=a[n-1];
ptr->next=null;
return head;
}


node *insert(node *head,int value)
node *ptr=(node*)malloc(sizeof(node));
node *p=head;
int i=0;
}


int main()
{
int n,addnum,head;
int a[max];
node*head;
printf("Enter n:\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter number u want to insert in array\n");
scanf("%d",addnum);
head=createlist(n,a);
return 0;
}




  




