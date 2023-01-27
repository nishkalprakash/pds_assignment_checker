/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:10
problem:3
topic:linked list
*/


#include<stdio.h>
#include<stdlib.h>
 struct node{
int data ;
struct node *next;
};
int ascending(struct node * head){
int count=0;
    while(head->next!=NULL){
    if(head->data <  head->next->data)
           count=count+1;
      head=head->next;
}
return count;
}

int descending(struct node * head){
int count=0;
    while(head->next!=NULL){
    if(head->data > head->next->data)
           count=count+1;
      head=head->next;
}
return count;
}

int main(){
int n,i;
printf("the number of elements\n");
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
int count1=ascending(B[0]);
int count2=descending(B[0]);
printf("%d\n",count1);
printf("%d\n",count2);

if(count1==n-1){
printf("the list is in ascending order\n");
}
else if (count2==n-1){
printf("the list is in descending order\n");
}
  else printf("the list is not sorted\n");

return 0;
}
