/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To store 2 strings in list 
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct item{                                       //declaration of list struct 
	char d;
	struct item *next;
}item;

item *createlist(char s[])				//function to create list from a string
{	
	int n=0,i=0;
	while(s[n]!='\0'){				//counts number of letts in string
	n++;
	}
	int j=0,k=0;
	item *head,*ptr;
	head=(item*)malloc(sizeof(item));
	ptr=head;
	for(i=0;i<n-1;i++)
	{
		ptr->d=s[i];
		ptr->next=(item*)malloc(sizeof(item));
		ptr=ptr->next;				//for list traversal
	}	
	ptr->d=s[n-1];
	ptr->next=NULL;
	return head;
}
void printlist(item * I){				//function to print list
	printf("{");
	while(I!=NULL){
		printf("%c",I->d);
		if(I->next != NULL) printf(", ");
		I=I->next;
	}
	printf("}");
	printf("\n");
}

int main(){
	char s1[100];					
	char s2[100];
	printf("Type in the first string:");
	scanf("%s", s1);
	printf("Type in the second string:");
	scanf("%s", s2);
	item *head1,*head2,*head;			
	head1=createlist(s1);
	head2=createlist(s2);
	printf("L1 = ");
	printlist(head1);
	printf("L2 = ");
	printlist(head2);
	char s[100];
	int i=0,j=0,r=0,k=0;
	for(i=0;s1[i]!='\0';i++){			//removing elements of string 2 from string 1
		for(j=0;s2[j]!='\0';j++){
			if (s1[i]==s2[j]) r++;
		}
		if (r==0){ 
			s[k]=s1[i];
			k++;
		}
		r=0;j=0;
			
	}
	s[k]='\0';
	head=createlist(s);
	printf("L = ");
	printlist(head);	
return 0;
}
