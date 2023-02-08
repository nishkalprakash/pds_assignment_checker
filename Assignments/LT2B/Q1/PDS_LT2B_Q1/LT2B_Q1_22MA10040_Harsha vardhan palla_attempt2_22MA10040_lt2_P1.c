/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
labtest 2:
program 1
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
int main()
{
int m;
printf("enter the value of m");
scanf("%d",&m);
int arr[m];
for(int i=0;i<m;i++){
scanf("%d",&arr[i]);
}
