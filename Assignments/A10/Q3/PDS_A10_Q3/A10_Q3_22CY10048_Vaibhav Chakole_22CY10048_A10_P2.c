/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 10
Description : 
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node *createlist( int n, int A[])
{
LINK head,tail;
head=(LINK)malloc(sizeof(ELEMENT));
head->d=A[0];
tail=head;
for(int i=1;i<n;i++)
{
tail->next=(LINK)malloc(sizeof(ELEMENT));
tail=tail->next;
tail->d=A[i];
}
tail=NULL;
return head;
}
void duplicate(LINK l)
{
LINK a=l,b=l;
int t=0,k=0,t1,t2,max=0,min=9999999;
while(a!=NULL)
{
if((a->d==b->d)&&(b!=a))
{
t[k]=a->d;
k++;
}
b=b->next;
}
if(max<a->d)
{
t1=max;
min=a->d;
a->d=t2;
}
a=a->next;
t[k]=-1;
}
if(temp)
{
while(t[k]!=-1)
{
printf("The input list contains duplicate numbers");
}
}
}
int main()
{
int n;
printf("Enter number of element in a list");
scanf("%d",&n);
int a[n];
printf("Enter elements \n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
LINK head=createist(n,a);
duplicate(head);
return 0;
}

