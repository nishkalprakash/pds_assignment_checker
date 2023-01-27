#include<stdio.h>
#include<stdlib.h>
void printlist(struct node*);
void even(struct node*);
struct node
{
int n;
int a[100];
};
int main()
{
struct node createlist;
printlist(struct node*n);
even(struct node*n);
return 0;
}
void printlist(struct node*I)
{
int a[100],i,n;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void even(struct node*I);
{
int a[100],k;
printf("even numbers");
for(k=0;k<n;k++)
{
if(a[k]%2==0)
{
printf("%d",a[k]);
}
}
}


