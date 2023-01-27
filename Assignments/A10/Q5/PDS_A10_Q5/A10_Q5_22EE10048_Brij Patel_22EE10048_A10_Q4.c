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
return 0;
}

