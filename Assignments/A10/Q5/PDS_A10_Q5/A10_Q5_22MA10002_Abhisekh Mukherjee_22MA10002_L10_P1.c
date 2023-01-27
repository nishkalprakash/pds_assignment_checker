/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:10
problem:1
topic:linked list
*/


#include<stdio.h>
#include<stdlib.h>
 struct node{
int data ;
struct node *next;
};
void intersec(struct node * A,struct node * B){
struct node * C;
for(;A!=NULL;A=A->next){
 C=B;
while( C!=NULL){
if(A->data==C->data){
         printf("%d\t",A->data);
   }

C=C->next;

}
}

}



void uniAbhi(struct node * A,struct node * B){
struct node * C;
struct node * D;
int count,i=0;
D=A;
 while(D!=NULL){
     printf("%d\t",D->data);
i++;
       D=D->next;

}

for(;B!=NULL;B=B->next){
 C=A;
count=0;
while( C!=NULL){
if(B->data==C->data){
        count++;
   }

C=C->next;

}
if(count==0){ printf("%d\t",B->data); }
}


}











int main(){
// list 1
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


// list 2;

int m;
printf("the number of elements in 2nd list\n");
scanf("%d",&m);
int C[m];
printf("enter the numbers\n");
for(i=0;i<m;i++){
  scanf("%d",&C[i]);
}
struct node *D[m];
 for(i=0;i<m;i++){
   D[i]=(struct node *)malloc(sizeof(struct node));
}
for(i=0;i<m-1;i++){
     D[i]->data=C[i];
     D[i]->next=D[i+1];
  }
D[i]->data=C[i];
D[i]->next=NULL;

struct node *abhi[100];
for(i=0;i<100;i++){
   abhi[i]=(struct node *)malloc(sizeof(struct node));
}

int b=0,d=0;

printf("L(intersection)=\n");
intersec(B[0],D[0]);
printf("\n");
printf("L(union)=\n");
uniAbhi(B[0],D[0]);
return 0;
}

























