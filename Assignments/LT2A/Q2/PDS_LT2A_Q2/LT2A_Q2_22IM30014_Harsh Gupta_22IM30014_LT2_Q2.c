/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
LAb test 2 
Description -  sir told that the end set can be in unsorted order 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int

typedef struct link1{
	int d;
	struct link1 *next;
}link;
link *head1,*head2,*head3;                                     
link *ptr,*ptr1 ,*ptr2,*ptr3;
void read(int a){                                       // creating a function to take the input as element 
	link *temp;
	temp = (link*)malloc (sizeof(link));
	temp->d=a;
	temp->next =  NULL;
	ptr->next = temp;
	ptr = temp;
}
int check(link *ptr,int k){                    // Checking whether the element exist or not 
	while (ptr!=NULL){
		if(k==(ptr->d)){
			return 1;
		}
		ptr = ptr->next;
		
	}
	return 0;
}
void traverse(link *ptr){                    // traversing the list to  print at end
	while (ptr!=NULL){
		printf("%d ",ptr->d);
		ptr = ptr->next;
	}
}



int main() {
	int n,k; 
	printf("###L1###\nEnter N: ");                      // taking size of list1 
	scanf("%d",&n);
	head1 = (link*)malloc (sizeof(link));
	printf("Enter %d element : ",n);
	scanf("%d",&k);
	head1->d =k;
	head1->next = NULL;
	
	ptr=head1;
	for (int i=0;i<n-1;i++){                              // taking list1 element
		scanf("%d",&k);
		ptr1 = head1;
		if(check(ptr1,k)==1) continue;
		read(k);
	}

	int m; 
	printf("\n###L2###\nEnter N: ");                      // taking size of list2 
	scanf("%d",&m);
	printf("Enter %d element : ",m);
	head2 = (link*)malloc (sizeof(link));
	scanf("%d",&k);
	head2->d =k;
	head2->next = NULL;
	ptr=head2; 
	for (int i=0;i<m-1;i++){                           // taking list2 element 
		scanf("%d",&k);
		ptr1 = head2;
		if(check(ptr1,k)==1) continue;
		read(k);
	}
	
	printf("L1 = ");                 
	ptr=head1;
	traverse(ptr);
	printf("\n+\nL2 = ");
	ptr=head2;
	traverse(ptr);
	printf("\n");
	head3 = (link*)malloc (sizeof(link));
	head3->d=head1->d+head2->d;
	head3->next=NULL;int flag=1;
	ptr=head3;ptr1=head1;
	for(int i=0;i<n;i++){                                          // adding each integer 
		ptr2=head2;

		for(int j=0;j<m;j++){
			
			if(flag==1) {
				flag=0;
				if(ptr2->next==NULL){
				break;
			}
				ptr2=ptr2->next;
				continue;
			}
			ptr3=head3;
			if(check(ptr3,ptr1->d+ptr2->d)==1){
				if(ptr2->next==NULL){
				break;
			}
				ptr2=ptr2->next;
				continue;
			} 
			read(ptr1->d+ptr2->d);
			if(ptr2->next==NULL){
				break;
			}
			ptr2=ptr2->next;
		}if(ptr1->next==NULL){
			break;
		}
		ptr1=ptr1->next;

	}
	printf("=\nL = ");
	ptr=head3;
	traverse(ptr);






}	