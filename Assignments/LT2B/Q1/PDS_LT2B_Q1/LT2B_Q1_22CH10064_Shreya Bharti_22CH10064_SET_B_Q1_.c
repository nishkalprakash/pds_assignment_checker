/*NAME: Shreya Bharti
Roll: 22CH10064
SEC: 14
Test set: B
Question no.: 1
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct set{		// defining structure
	char data;
	struct set *next;	//declaration of next pointer
}set;



struct set* StrToList(char s[50]) {	//declaration and defintion of function to enter string to list
struct set *head, *tail;		// declaration of pointer variables to traverse to the list
int i;
if (s[0] != '\0') {
head = (struct set*) malloc(sizeof(struct set));
head->data = s[0];			//setting data of first element
tail = head;
for (i=1; s[i] != '\0'; i++)  {
tail->next = (struct set*) malloc(sizeof(struct set));
tail = tail->next;
tail->data = s[i];			//entering data to rest of the elements using loop
}
tail->next = NULL;			//last element pointing to NULL
}

return head;	
}


void printlist(struct set *head){	//function to print the list
	struct set *temp;
	temp=head;
	while(temp!=NULL){
	printf("%c ",temp->data);
	temp=temp->next;	
	}
}

//struct set* Set_diff(struct set *l1, struct set *l2){};

int main(){

struct set *l1, *l2;		//declaration of struct variables
char str1[50], str2[50];
printf("Enter string: ");
scanf("%s", &str1[50]);		//enters first string

/*for(int i=0; i!='\0'; i++){
scanf("%c", &str1[i]);
}*/

l1=StrToList(str1);		//entering string1 to list1(function call)		
printf("Enter string: ");	//enters second string
scanf("%s", &str2[50]);
/*for(int i=0; i!='\0'; i++){
scanf("%c", &str2[i]);
}*/
l2=StrToList(str2);		//entering string2 to list2(function call)
printlist(l2);


return 0;
}


struct set* Set_diff(struct set *l1, struct set *l2) {		//declaration and definition of function for difference of list

struct set* head1;
struct set* head2;


}








