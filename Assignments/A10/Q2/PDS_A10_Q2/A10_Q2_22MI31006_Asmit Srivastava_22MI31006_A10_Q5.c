#include<stdio.h>
#include<stdlib.h>
struct node{     
int data;
struct  node* next;  //list creation
};

void check(struct sort*head);
int main(){
int n,arr[50];
printf("enter length ");
scanf("%d" , &n);
printf("enter elements");
for(int j=0;j<n;j++){

scanf("%d" ,&arr[j]);}
struct node *head,*temp=NULL;
for(int i=0;i<n;i++){
if(i==0){
head=(struct node*)malloc(sizeof(struct node));
temp=head;
}
else{if(i==(n-1)){
temp->next=NULL;
break;}
temp->next=(struct node*)malloc(sizeof(struct node));
temp=temp->next;
}
}
return 0;
};

