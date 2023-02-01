/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:11
problem:4
topic:recursion to link list
*/


#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node * next;
};
// deletion function
struct node *DEL(struct node * head,int m){
struct node *p;
struct node *q;
struct node *z;
q=head;
p=head->next;
if(head->data!=m){
while(p->data!=m && p->next!=NULL){
    p=p->next;
    q=q->next;
}
int c=0;
if(p->data==m){
   q->next=p->next;
c=1;
  free(p);
}
if(c==0) printf("%d does not exist\n",m);
}


if(head->data==m){
    z=head;
   head=head->next;
  free(z);
}


 return head;

}  
// print function
void print(struct node * head){
  while(head!=NULL){
   printf("%d\t",head->data);
   head=head->next;
}
}








// main function

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
printf("enter the deleting element\n");
scanf("%d",&m);
head=DEL(head,m);
printf("output after deleting\n");
print(head);
return 0;
}


















