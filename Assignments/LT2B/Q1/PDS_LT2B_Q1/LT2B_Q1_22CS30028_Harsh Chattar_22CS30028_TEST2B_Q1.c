/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
TEST : 2B
Description : making lists from given strings and then finding the difference
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct SET{   //defining a set
	char data;
	struct SET *next;
}SET;

typedef SET *LINK;

LINK StrToList(char s[ ])  //function to create lists from a string
{
	LINK head= NULL, tail;
	int i;
	if (s[0] !='\0'){   
	head = (LINK) malloc(sizeof(SET));
	head->data = s[0];
	tail = head;
	for (i=1; s[i] !='\0'; i++)  
		{
			tail->next = (LINK) malloc(sizeof(SET));
			tail = tail->next;
			tail->data = s[i];
		}
		tail->next = NULL;
	}

	return head;
}


void printList(SET *head){   //function to print a list
	SET *temp = head;
	while(temp!=NULL){
		printf("%c ",temp->data);
		temp = temp->next;
	}
}

void operation(SET *head1 ,SET *head2,int n,int m){   //function to find the difference
	SET *ptr1 = head1,*ptr2 = head2;
	char arr[n],temp = 0,i=0;
	while(ptr1!=NULL){
		temp = 0;
		while(ptr2!=NULL){
			if(ptr1->data != ptr2->data ){
				temp++;
				//printf("check");
			}
			ptr2=ptr2->next;
		}
		if(temp==m){
			arr[i] = ptr1->data;
			i++;
		}
		ptr1 = ptr1->next;
	} 
	SET *L3 = malloc(sizeof(struct SET));
	L3 = StrToList(arr);
	printf("\nL = ");
	if(i==0){
		printf("{ }");
	}
	else printList(L3);
	
}

int main(){
	char s1[100],s2[100];
	printf("Enter string 1 : ");  //taking input strings
	scanf("%s",s1);
	printf("Enter string 2 : ");
	scanf("%s",s2);

	SET *L1 = malloc(sizeof(struct SET)), *L2 = malloc(sizeof(struct SET));  //alloctaing space for the lists

	int len1=0,len2=0;

	while(s1[len1]!='\0'){  //finding the length of strings
		len1++;
	}

	while(s2[len2]!='\0'){
		len2++;
	}

	char str1[len1];  //removing duplicate characters from string1
	int c = 0;
	for(int i = 0;i<len1;i++)
	{
		int temp = 1;
		for(int j=0;j<len1 && i!=j;j++){
			if(s1[i] == s1[j]){
				temp++;
			}
		}	
		if(temp==1){
			str1[c] = s1[i];
			c++; 
		}
	}
	str1[c] = '\0';
	int n = c;


	char str2[len2];  //removing duplicate character from string2
	c = 0;
	for(int i = 0;i<len2;i++)
	{
		int temp = 1;
		for(int j=0;i<len2 && i!=j;j++){
			if(s2[i] == s2[j]){
				temp++;
			}
		
		}	
		if(temp==1){
			str2[c] = s2[i];
			c++; 
		}
	}
	str2[c] = '\0';
	int m = c;
	//printf("%d %d",n,m);

	L2 = StrToList(str2);  //making lists
	L1 = StrToList(str1);

	//printing results after calling the functions

	printf("\nL1 =  ");
	printList(L1);
	printf("\nL2 = ");
	printList(L2);
	operation(L1,L2,n,m);







	return 0;
}
