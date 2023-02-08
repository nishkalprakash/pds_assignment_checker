/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Question number: 1
Description : LAB TEST 2
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct SET
{
	char data;
	struct SET* next;
}SET;
SET *createSET(int n,char str1[]) //PASSING THE STRING TO CREATE LINKED LIST
{
SET* head,*tail;
head=(SET*)malloc(sizeof(SET));
head->data=str1[0];
tail=head;
for(int i=1;str1[i]!='\0';i++)
{
tail->next=(SET*)malloc(sizeof(SET)); //DYNAMICALLY ASSIGINIG MEMORY
tail=tail->next;
tail->data=str1[i];
}
tail=NULL;
return head;
}
SET *SET_diff(char str1[],char str2[]) //OPERATING THE OPERATION OF SET DIFFERENCE
{
SET* head,*tail;
head=(SET*)malloc(sizeof(SET));
head->data=str1[0];
tail=head;
for(int i=0;str2[i]!='\0';i++)
{
for(int j=0;str1[j]!='\0';j++)
{
if(str1[j]!=str2[i])
{
tail->next=(SET*)malloc(sizeof(SET));
tail=tail->next;
tail->data=str1[i];
break;
}
}
}
tail=NULL;
return head;
}
void printSET1(SET* l) //PRINTING THE LINKED LIST
{
printf("L1={");
do
{
printf("%c,",l->data);
l=l->next;
}while(l!=NULL);
printf("}");
}
void printSET2(SET* l) //PRINTING THE LINKED LIST
{
printf("L2={");
do
{
printf("%c,",l->data);
l=l->next;
}while(l!=NULL);
printf("}");
}
void printSET3(SET* l) //PRINTING THE LINKED LIST
{
printf("L={");
do
{
printf("%c,",l->data);
l=l->next;
}while(l!=NULL);
printf("}");
}
int main()
{
char str1[20],str2[20];
printf("#### L1 ####\n");
printf("Enter string: ");
scanf("%s",str1);
int len1=strlen(str1); //FINDING LENGHT OF STRING
printf("#### L2 ####\n");
printf("Enter string: ");
scanf("%s",str2);
int len2=strlen(str2); //FINDING LENGHT OF STRING
SET *head=createSET(len1,str1); //ASSIGNING THE RETURNED VALUE TO HEAD
printSET1(head);
printf("\n");
SET *head1=createSET(len2,str2); //ASSIGNING THE RETURNED VALUE TO HEAD
printSET2(head1);
printf("\n");
SET *head2=SET_diff(str1,str2); //ASSIGNING THE RETURNED VALUE TO HEAD
printSET3(head2);
return 0;
}
