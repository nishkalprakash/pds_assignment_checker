/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 10
Description - 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
typedef struct link1{
	int d;
	struct link1 *next;

}link;
link *head;                                     
link *ptr ;
void read(int a){                                       // creating a function to take the input as element 
	link *temp;
	temp = (link*)malloc (sizeof(link));
	temp->d=a;
	temp->next =  NULL;
	ptr->next = temp;
	ptr = temp;
}
void traverse(link *ptr){                    // traversing the list to  print at end
	while (ptr!=NULL){
		printf("%d ",ptr->d);
		ptr = ptr->next;
	}
}


int main() {
	int n,k;                       // taking size of list 
	scanf("%d",&n);
	head = (link*)malloc (sizeof(link));
	scanf("%d",&k);
	head->d =k;
	head->next = NULL;
	
	ptr = head ; 
	
	for (int i=0;i<n-1;i++){                  // taking element of list 
		scanf("%d",&k);
		read(k);
	}
	int m;scanf("%d",&m);
	ptr=head;
	if ((ptr->d)<=m){                          // checking whether head is less than insertion element 
		while (ptr->next!=NULL){               // changing the pointer upto the element  
		
		if ((ptr->next->d)>m){
			break;
		}
		else ptr = ptr->next;
		}
		link* insert;
		insert = (link*)malloc (sizeof(link));
		insert->d=m;
		insert->next=ptr->next;
		ptr->next=insert;
		}
	else {                                       // otherwise changing head 
		link* insert;
		insert = (link*)malloc (sizeof(link));
		insert->d=m;
		insert->next=head;
		head=insert;
		}
		
	
	ptr = head;
	traverse(ptr);
	
	

	


    return 0;
    }
    
