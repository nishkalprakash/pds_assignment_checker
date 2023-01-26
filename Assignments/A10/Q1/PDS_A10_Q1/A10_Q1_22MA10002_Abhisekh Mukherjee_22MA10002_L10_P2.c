/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:10
problem:2
topic:linked list
*/


#include<stdio.h>
#include<stdlib.h>
// create the structure
 struct node{
int data ;
struct node *next;
};
// print the list
void printList(struct node * head){
  while(head!=NULL){
     printf("%d\t",head->data);
       head=head->next;
}
}
// even function to findout the even numbers
void even(struct node * head){
struct node * ptr;
struct node * p;
struct node * q;
   p=head;
q=head->next;
    int i=0;
    while(q!=NULL){
    if(q->data %2==1){
        ptr=q;
 q=q->next;
p->next=q;
ptr->next=NULL;
      
        free(ptr);
      }

   if(q->data %2==0 && i!=0)
 {  q=q->next ; 
 p=p->next;
i++;}


if(head->data%2==0){
  head->next=q;
     i++;
  }

        if(q->data %2==0 && i==0){ 
               head=q;
            //  p=p->next;q=q->next;
          q=q->next ; 
           p=p->next;
                i++;
               }
            
}
printf("the elements in modified list  is \n");
printList(head);

return ;
}


          
// createlist function to create link list
struct node * createlist(int A[],int n){
int i;

struct node *B[n];
 for(i=0;i<n;i++){
   B[i]=(struct node *)malloc(sizeof(struct node));
}
for(i=0;i<n-1;i++){
     B[i]->data=A[i];
     B[i]->next=B[i+1];
  }
B[i]->data=A[i];
B[i]->next=NULL;
printf("the elements in list 1 is \n");
printList(B[0]);
// even(B[0]);

}

// main function
int main(){
int n,i;
printf("the number of elements\n");
scanf("%d",&n);
if(n>=10) return 0;
int A[n];
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
createlist(A,n);
return 0;
}

