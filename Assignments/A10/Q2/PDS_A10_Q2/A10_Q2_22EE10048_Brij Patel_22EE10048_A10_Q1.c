/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 10

Description-
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>//STUD LIBRARY
struct node //DEFINING STRUCTURE VARIABLE
{
	int d;
	struct node* next;
};//Comment
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node* createlist(int n,int A[])//method to create list
{
LINK head,tail;
head=(LINK)malloc(sizeof(ELEMENT));
head->d=A[0];
tail=head;
for(int i=1;i<n;i++)
{
tail->next=(LINK)malloc(sizeof(ELEMENT));//malloc
tail=tail->next;
tail->d=A[i];
}
tail=NULL;
return head;
}
void checkorder(LINK l)//method to check order
{
LINK prev=l,ptr=l;
ptr=ptr->next;
int c=ptr->d-prev->d,temp=0,d;//I AM GOD
while(ptr!=NULL)
{
d=ptr->d-prev->d;
if(c*d>0)
temp=0;
else
{
temp=1;
break;//bREakInG If nOt SOrtTEd
}
prev=ptr;
ptr=ptr->next;
}
if(temp==1)
printf("The input list L is not in sorted order\n");
else
{
if(c>0)
printf("The input list L is in ascending order\n");
else
printf("The input list L is in descending order\n");
}}
int main()//main method
{
int n;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter Array Elements: "); 
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
LINK head=createlist(n,a);//creating list
checkorder(head);
return 0;
}

