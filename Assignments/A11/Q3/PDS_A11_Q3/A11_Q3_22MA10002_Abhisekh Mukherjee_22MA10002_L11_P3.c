/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:11
problem:3
topic:recursion to link list
*/


#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node * next;
};

struct node * insert(struct node *head,int m){
 struct node *ptr=(struct node *)malloc(sizeof(struct node));
 struct node *p=head;
struct node *q=head->next;
     while(q->data<m){
        p=p->next;
    q=q->next;
}
ptr->data=m;
ptr->next=q;
p->next=ptr;
 
return head;
}

void print(struct node * head){
  while(head!=NULL){
   printf("%d\t",head->data);
   head=head->next;
}
}








int main(){
 int n,i;
printf("enter the number of elements in list\n");
scanf("%d",&n);
int A[n];
printf("enter the numbers\n");
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
struct node *head=NULL;
struct node *end;

   head=(struct node *)malloc(sizeof(struct node));
  head->data=A[0];
  end =head;
i=1;
while(i<n){
  end->next=(struct node *)malloc(sizeof(struct node));
  end=end->next;
    end->data=A[i];
   i++;
}
end->next=NULL;
int m;
printf("enter the new element\n");
scanf("%d",&m);
head=insert(head,m);
print(head);
return 0;
}



