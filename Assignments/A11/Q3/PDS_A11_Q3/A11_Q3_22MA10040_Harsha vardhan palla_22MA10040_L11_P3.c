/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:3
*/
#include<stdio.h>
#include<stdlib.h>
struct linked_list{
int num;
struct linked_list*next;
};
typedef struct linked_list node;
void insert(node *head,int n){
node*first; node*ele; node*prev;
ele=(node *)malloc(sizeof(node));
first=(node *)malloc(sizeof(node));
prev=(node *)malloc(sizeof(node));
ele->num=n;
first=head;
printf("%d\n",head->num);
if(n<(head->num)){ele->next=first; head=ele;}
else{
while(n>first->num){
prev=first;
first=first->next;
if(first==NULL) break;
}
if(first!=NULL){
prev->next=ele;
ele->next=first;
return;
}
else{
prev->next=ele;
printf("%d\n",ele->num);
ele->next=NULL;
return ;
}
}
}
int main(){
int m,n;
node *head, *first;
head=(node *)malloc(sizeof(node));
first=head;
printf("n=");
scanf("%d",&n);
int ll[n];
printf("ll[n]=");
for(int i=0;i<n;i++){
scanf("%d",&ll[i]);
}
printf("M=");
scanf("%d",&m);
for(int i=0;i<n;i++){
first->num=ll[i];
first->next=(node *)malloc(sizeof(node));
first=first->next;
}
first=NULL;
insert(head,m);
node *test=head;
printf("output after inserting %d:\n",m);
while(head->next!=NULL){
printf("%d ",head->num);
head=head->next;
}
printf("\n");
return 0;
}





































