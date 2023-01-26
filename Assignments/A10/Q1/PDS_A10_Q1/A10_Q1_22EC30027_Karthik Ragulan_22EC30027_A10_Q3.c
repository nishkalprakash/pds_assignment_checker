#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

struct node *createlist(int n,int A[])
{
struct node *list;
list=(struct node*)malloc(n*sizeof(struct node));
for(int i=0;i<n;i++)
{
list[i].data=A[i];
list[i].link=&list[i+1];
if(i==1){
}
}
list[n-1].link=NULL;
return list;
}

void printlist(struct node* I)
{
while(I!=NULL)
{
printf("%d\t",I->data);
I=I->link;
}
}

int main()
{
int n;
struct node *ptr,*head;
printf("enter the length of the array:");
scanf("%d",&n);
int A[n];
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
ptr=createlist(n,A);
printlist(ptr);
return 0;
}



