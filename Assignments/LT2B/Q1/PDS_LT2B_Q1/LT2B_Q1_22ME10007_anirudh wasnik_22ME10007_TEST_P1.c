#include<stdio.h>
#include<stdlib.h>
typedef SET *link;
typedef struct SET{
char data;
struct SET *link;
}L1,L2,L3;
///////////////////////////////////
link strlist(char s[]){
link head=NULL,tail;
int i;
if(s[0]!='\0'){
head=(link)malloc(sizeof(SET));
head->d=s[0];
tail=head;
for(i=1;s[i]!='\0';i++){
tail->next=(link)malloc(sizeof(SET));
tail=tail->next;
tail->d=s[i];}
tail->next=NULL;}
return head;}
//////////////////////////////////
int main()
 {
L1=(SET*)malloc(sizeof(char)*10);

printf("enter list1 string");





return 0;
 }


