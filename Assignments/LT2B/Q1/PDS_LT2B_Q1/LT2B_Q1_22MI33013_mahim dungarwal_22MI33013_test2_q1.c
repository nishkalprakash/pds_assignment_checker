#include<stdio.h>
#include<stdlib.h>

struct node{
	char data[100];
	struct node* next;
	};

struct node* check(struct node* head1, struct node* head2) {
struct node* p = (struct node*) malloc(sizeof(struct node));
struct node* q = (struct node*) malloc(sizeof(struct node));
p=head1;
q=head2;

while(p != NULL) {
while(q != NULL) {
if(p->data == q->data){
printf("%s",p->data); 
}
}
}

}


int main() {
int n,m,x;
struct node l1[n];
struct node l2[m]; 
struct node L[x];
 


printf("enter the values of n,m");
scanf("%d %d",&n,&m);

printf("enter the values in l1 : ");
for(int i=0;i<n;i++) {
scanf("%s",&l1->data[i]); 
}

printf("enter the values in l2 : ");
for(int i=0;i<m;i++) {
scanf("%s",&l2->data[i]); 
}



for(int i=0;i<n;i++) {
for(int j=0;j<m;j++) {
	if(l1->data[i] == l2->data[j]) {
	printf("%s",l1->data[i]) ;
}
}
}



return 0;
}
