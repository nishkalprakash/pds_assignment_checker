/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 10
Question No. : 3
Description : 
*/

#include<stdio.h>
#include <stdlib.h>

struct list {
int data;
struct list *next;
};

// LINK StrToList (char s[ ]) {
// LINK head = NULL, tail;
// int i;
// if (s[0] != '\0') {
// head = (LINK) malloc (sizeof(ELEMENT));
// head->d = s[0];
// tail = head;
// for (i=1; s[i] != '\0'; i++) {
// tail->next = (LINK) malloc(sizeof(ELEMENT));
// tail = tail->next;
// tail->d = s[i];
// }
// tail->next = NULL;
// }
// return head;
// }
void print_list (struct list head)
{
struct list temp;
temp = head;
while(temp!=NULL)
{
if(temp->next ==NULL) printf("%d. END OF LIST \n", temp->data); // for the last element
else printf("%d -> ", temp->data); // for other elements
temp = temp->next;
}
}

int main(){
	struct list[100];
	printf("Input:\n\tL = ");
	scanf("%d",&list[0]);
	struct list head->data = arr[0];
	arr[1]=NULL;
	int *new;
	for(int i=1;i!='\0';i++){
		scanf("%d",&arr[i]);
		new=malloc(sizeof(struct list));
        new->next=head;
        head=new;
	}
	struct list head->data = arr[0];
	print_list(head);




return 0;
}



