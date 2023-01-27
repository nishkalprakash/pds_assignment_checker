/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:10
program 3
*/
#include<stdio.h>
#include<stdlib.h>
struct node{ 
  int d;
  struct node* next;
};

struct node* createlist(int n,int a[]){
    struct node *p,*first;
    p=(struct node*)malloc(sizeof(struct node));
    first=p;
    for(int i=0;i<n;i++){
      p->d=a[i];
    (p->next)=(struct node* )malloc(sizeof(struct node));
    p=p->next;
}
p=NULL;
return first;
}
void even(struct node* l,int n){
struct node *first;
first=(struct node*)malloc(sizeof(struct node));
for(int i=0;i<n,l->next!=NULL;i++){
  if(i%2!=0) {printf("%d",l->d); l=l->next;}
else l=l->next;
}}
int main()
{
int m;
printf("enter the value of m");
scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){
scanf("%d",&arr[i]);
}
struct node* list;
list=createlist(m,arr);
even(list,m);
return 0;
}









