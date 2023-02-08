/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Lab Test : 2
Question No. : 1
Description : Using linked lists to take inputs of strings and find the difference of sets
*/

#include<stdio.h>												//Defining all libraries
#include<stdlib.h>
#include<string.h>

typedef struct node{											//Defining linked list
	char data;
	struct node * next;
}node;

node *createlist(int n, char A[])								//Defining a function to create a list from an array
{	
	node *head,*ptr;
	head=(node*)malloc(sizeof(node));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->data=A[n-1];
	ptr->next=NULL;
	return head;
}

int main(){
	node *head1;
	node *head2;
	node *head3;
	char s1[50];
	char s2[50];
	char s[50];													//s=s1-s2 similarily L=L1-L2
	printf("#### L1 ####\nEnter string: ");
	scanf("%s",s1);
	printf("#### L2 ####\nEnter string: ");
	scanf("%s",s2);												//Taking the inputs of the strings
	printf("L1 = {");
	for(int i=0;i<strlen(s1);i++){								//Printing the elements of the array
		printf("%c",s1[i]);
		if(i<strlen(s1)-1)printf(",");
	}
	printf("}\n -\nL2 = {");
	for(int i=0;i<strlen(s2);i++){
		printf("%c",s2[i]);
		if(i<strlen(s2)-1)printf(",");
	}
	printf("}\n = \nL = {");
	int k=0,i,j;

	for(i=0;i<strlen(s1);i++){									//Syntax for punctuation marks like { and , etc.
			int flag=0;
		for(j=0;j<strlen(s2);j++){
			if (s1[i]==s2[j])flag=1;
		}
		if(flag==0){
			s[k]=s1[i];
			k++;
		}
	}
//////////////////////////////////////////////
	head1=createlist(strlen(s1),s1);							//Here we are creating lists with the help of arrays
	head2=createlist(strlen(s2),s2);
	head3=createlist(k,s);
//////////////////////////////////////////////	

	int flag=0,count=0;
	for(int i=0;i<k;i++){										//Syntax for punctuation marks like { and , etc.
		flag=0;
		for(int j=0;j<i;j++){
			if(s[j]==s[i])flag=1;								//Initialising flag for repetitive numbers
		}
		if(flag==1){

			continue;
		}
		if(i==0)
		printf("%c",s[i]);
		else if(i>0)
		printf(",%c",s[i]);										//Final printing of output

	}
	printf("}\n");

	return 0;
}