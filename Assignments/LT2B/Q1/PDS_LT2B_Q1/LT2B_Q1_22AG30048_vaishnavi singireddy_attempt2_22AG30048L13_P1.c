//DEFINE A SINGLE LINKED LIST STRUCTURE TO STORE A LIST OF CHARACTER STRINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
char data;
struct node *link;
}*head;
 
int main()
{
struct node *ptr,*current;
char s1[50],s2[50];
int i;
printf("#####L1######\n");
printf("enter the string 1:");
gets(s1);                        //input string 1
printf("#####L2######\n");
printf("enter the string 2:");
gets(s2);                        //input string 2
printf("\n");

head=malloc(sizeof(struct node));  //memory allocation to head
if(head==NULL)
{
printf("no memory for the list");
exit(0);
}
else
{
//creating a node
head->data=s1[0];
head->link=NULL;
ptr=head;
for(i=1;s1[i]!='\0';i++)
{
current=malloc(sizeof(struct node));
if(current==NULL)
{
printf("no memory for the list");
exit(0);
}
else
{
current->data=s1[i];
current->link=NULL;
ptr->link=current;
ptr=current;
}
}
}

ptr=head;
printf("L1={");
while(ptr!=NULL)
{
printf("%c ",ptr->data);
ptr=ptr->link;
}
printf("}");
printf("\n");
printf(" - ");
printf("\n");
head=malloc(sizeof(struct node));
if(head==NULL)
{
printf("no memory for the list");
exit(0);
}
else
{
head->data=s2[0];
head->link=NULL;
ptr=head;
for(i=1;s2[i]!='\0';i++)
{

current=malloc(sizeof(struct node));
if(current==NULL)
{
printf("no memory for the list");
exit(0);
}
else
{
current->data=s2[i];
current->link=NULL;
ptr->link=current;
ptr=current;
}
}
}

ptr=head;
printf("L2={");
while(ptr!=NULL)
{
printf("%c ",ptr->data);
ptr=ptr->link;
}
printf("}");
}



