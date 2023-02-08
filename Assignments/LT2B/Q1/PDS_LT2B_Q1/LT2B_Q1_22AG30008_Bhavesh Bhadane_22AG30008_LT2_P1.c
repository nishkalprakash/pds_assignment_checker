/*Name - Bhavesh Nitin Bhadane
  Roll no- 22AG30008
  SECTION - 14
  Topic - LAB TEST 2 */

#include<stdio.h>
#include<stdlib.h>

typedef struct set{
	char data;
	struct set*next;
} set;

set*createlist(char s[]){
	int i;
   set*temp;
   set*head=(set*)malloc(sizeof(set));
if(s[0]!='\0'){
	head->data=s[0];

	temp=head;

for(i=1;s[i]!=0;i++)
{
    temp->next=(set*)malloc(sizeof(set));
    temp=temp->next;
    temp->data=s[i];
}
  temp->next=NULL;

}

return head;



}




int main(){
	int m,n,count=0;
  char s1[5];
  char s2[5];
  printf("Enter characters of string 1");
   scanf("%s",s1);
  printf("Enter characters of string 2");
  scanf("%s",s2);

set*head1;
set*head2;
set*ptr1;
set*ptr2;

head1=createlist(s1);
head2=createlist(s2);

ptr1=head1;
ptr2=head2;
printf("L1 = ");
while(ptr1!=NULL){
	printf("%c ",ptr1->data);
	ptr1=ptr1->next;
}
printf("\n");
printf("L2 = ");
 while(ptr2!=NULL){
	printf("%c ",ptr2->data);
	ptr2=ptr2->next;
}

ptr1=head1;
ptr2=head2;

printf("\n");

printf("L = ");
   while(ptr1!=NULL){

   	while(ptr2!=NULL){

		if(ptr1->data!=ptr2->data){
			count=1;
		}
		else{
			count=0;
		}
     ptr2=ptr2->next;
	}

	if(count=1){
		printf("%c ",ptr1->data);
	}
	if (count =0){
		printf(" ");
	}
ptr1=ptr1->next;

}
 





return 0;
}