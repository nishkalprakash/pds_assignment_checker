/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:10
problem:4
topic:linked list
*/


#include<stdio.h>
#include<stdlib.h>
 struct node{
int data ;
struct node *next;
};


void duplicate(struct node *A){
  struct node *c;
struct node *D;
D=A;
  c=A->next;
int count,d=0;
  for(;D!=NULL;D=D->next){
     count=0;
      c=D->next;
 
      while(c!=NULL){
          if (D->data==c->data) {
                 count++;
          }
         c=c->next;
    }
  if (count>0){  
      printf("the duplicate is %d\n",D->data);
       d++;
          }
}
if (d==0) { printf("the list does not contain any duplicate\n");}
         
      

}

 int max(struct node *head){
     int m=head->data;
while(head!=NULL){
       if(head->data > m) { m=head->data;}
    head=head->next;
  }
 return m;
}


int min(struct node *head){
     int m=head->data;
while(head!=NULL){
       if(head->data < m) { m=head->data;}
    head=head->next;
  }
 return m;
}






int main(){

int n,i;
printf("the number of elements in 1st list\n");
scanf("%d",&n);
int A[n];
printf("enter the numbers\n");
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
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
 int c=max(B[0]);
int d=min(B[0]);
printf("maximum element is %d\n",c);
printf("minimum element is %d\n",d);
duplicate(B[0]);

return 0;
}






