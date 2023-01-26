#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
int main()
{
int n;

printf("enter the length of the array: ");
scanf("%d",&n);
int arr[n];
printf("enter elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
struct node *temp=NULL,*head;
for(int i=0;i<n;i++)
{
if(i==0)
{
head=(struct node*)malloc(sizeof(struct node));
temp=head;
}
else 
{
if(i==(n-1))
{
temp->next=NULL;
break;
}
temp->next=(struct node*)malloc(sizeof(struct node));
temp=temp->next;
}
}


int k=0;
for(int i=0;i<n-1;i++)
{
if(arr[i]<arr[i+1]);
k++;
}

if((k+1)==n)
{
printf("the input list is ascending in order\n");
}
else 
{
printf("the input list is not sorted");
}

int z=0;
for(int i=0;i<n;i++)
{
if(arr[i]>arr[i+1])
z++;
}

if((z+1)==n)
{
printf("the input list is desecnding in order");
}

return 0;
};

