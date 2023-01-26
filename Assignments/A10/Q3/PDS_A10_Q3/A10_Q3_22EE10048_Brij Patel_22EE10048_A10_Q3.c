/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 10

Description-Checking for duplicate nos
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>
struct node //DEFINING STRUCTURE VARIABLE
{
	int d;
	struct node* next;
};
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node* createlist(int n,int A[])
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
LINK h1=l,h2=l;
int temp,k=0,t1,t2,max=0,min=99;
temp=0;
while(h1!=NULL)
{
while(h2!=NULL)
{
if((h1->d==h2->d)&&(h2!=h1))//checking for duplicate nos
temp=1;
h2=h2->next;
}
if(max<h1->d)//checking for max
max=h1->d;
if(min>h1->d)//checking for min
min=h1->d;
h1=h1->next;
}

if(temp)//checking for duplicate nos
printf("The input list contains duplicate numbers\n");
else
printf("The input list does not contain duplicate numbers\n");

printf("Maximum: %d\n",max);
printf("Minimum: %d\n",min);
}
int main()//main method
{
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter List Elements: "); 
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
LINK head=createlist(n,a);
duplicate(head);
return 0;
}
