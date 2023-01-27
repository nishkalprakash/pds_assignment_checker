/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 10

Description- balance checker
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>
typedef struct Customer
{
int acc;
char name[20];
int bal;
}cum;
struct node //DEFINING STRUCTURE VARIABLE
{
	cum d;
	struct node* next;
};
typedef struct node ELEMENT;
typedef ELEMENT* LINK;

void PrintArray(LINK head)
  {
if(head -> next == NULL)  {   /* boundary condition to stop recursion */
printf("%d %s %d\n",head->d.acc,(head->d).name,(head->d).bal);
return;           //head->(d.acc)
}
PrintArray(head -> next); /* calling function recursively*/
printf("%d %s %d\n",(head->d).acc,(head->d).name,(head->d).bal);/* Printing current element*/
return;
}
int main()
{
LINK head,tail;
head=(LINK)malloc(sizeof(ELEMENT));
tail=(LINK)malloc(sizeof(ELEMENT));
int temp=1;
printf("Enter AccountNumber Name Balance\n");
scanf("%d %s %d",&((tail->d).acc),((tail->d).name),&((tail->d).bal));
head=tail;
while(temp)
{
printf("Enter 1 for more entries,0 to terminate\n");
scanf("%d",&temp);
if(temp)
{
tail->next=(LINK)malloc(sizeof(ELEMENT));
tail=tail->next;
scanf("%d %s %d",&((tail->d).acc),((tail->d).name),&((tail->d).bal));
}
}
tail=NULL;
PrintArray(head);
return 0;
}
