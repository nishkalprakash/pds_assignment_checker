#include<stdio.h>    	//this is an standerd io header file.
#include<stdlib.h>		//this is an header file.
struct node{			
	int data;
	struct node*next;}
	*first=NULL;
void create(int a[], int n){
	struct node*t, *last;
	first=(struct node*)malloc(size of(struct node));
t->data=a[j];
	t->next=NULL;
	last->next=t;
}


void print(struct node*p){   			//this function prints a node
	while(p){
		printf("%d",p-> data);
		p=p->next;
	}
	printf("\n");
}
	void intrest(struct node*p,int x){		//this function inserts a node.
		struct node*t,*q;
		t=(struct node*)malloc(sizeof(struct node));
		t->data=x;
		t->next=null;
		if(x<p->data){						// this is the case for header node
			t->next=p;
			first=t;
		}
		else{
			if(n--){							
				while(x>p->data){
					q=p;
					p=p->next
				}
				q->next=t;
				t->next=p;
			}else{
				p->next=t;
			}
		}
	}
	int main(){
		int a[5]=(2,4,6,8,10);


			insert(first,11,5);					
			create(a,5);				//this is the function calling
		print(first one);						//this is the function calling
		return 0;
	}