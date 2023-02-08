
/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
lab test 2
problem:1
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct set{
char data;
struct set *next;
}SET;

void print(SET * head,int s){
   printf("L%d=",s);
   printf("{");
 
   while(head!=NULL){
   printf(",%c ",head->data);
      head=head->next;
}


printf("}\n");
}
     




SET * Create(char str[]){
       SET *temp=NULL;
SET *head=NULL;
SET *p=NULL;
int i;
for(i=0;str[i]!='\0';i++){
temp= (SET*)malloc(sizeof(SET));
temp->data=str[i];
temp->next=NULL;
if(head==NULL){
     head=temp;
}
else {p =head;
   while(p->next!=NULL)  p=p->next;

   p->next= temp;
       }

}
return head;
}



int main(){
   SET* L1;
SET* L2;
SET* L;
int i,j;
  char str[100],s[100];
    printf("enter the data of 1st list\n");
   scanf("%s",str);
 printf("enter the data of 2nd list\n");
   scanf("%s",s);
L1=Create(str);
L2=Create(s);
 print(L1,1);
 print(L2,2);
 char A[100],B[100],C[100];
int count=0;
  
for(i=0;str[i]!='\0';i++){
    for(j=0;s[j]!='\0';j++){
           if(str[i]==s[j]){
                 A[count]=str[i];
                count++;
                 break;
            }
}
}
//printf("%d\n",count);

 int d,m=0;
for(i=0;str[i]!='\0';i++){
       d=0;
   for(j=0;j<count;j++){
         
        if(str[i]== A[j])  {   ++d;}
      }
if(d==0){ C[m]=str[i];
             m++;}

}
C[m]='\0';
++m;

L=Create(C);
print(L,3);
return 0;
}
