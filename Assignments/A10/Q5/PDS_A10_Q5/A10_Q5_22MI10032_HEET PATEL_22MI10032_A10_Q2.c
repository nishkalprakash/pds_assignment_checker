/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 10
Description :  to sort intersection and union
*/
#include<stdio.h>
#include<stdlib.h>
struct node {
int num;
struct node *next;
};
struct node*createList(int n){
struct node *mylist;
mylist=(struct node*)malloc(n*sizeof(struct node));
printf("Enter elements of this list:\n");
for(int i = 0 ; i< n;i++){
scanf("%d",&mylist[i].num);
mylist[i].next=&mylist[i+1];
}
mylist[n-1].next=NULL;
return mylist;
}
void printlist(struct node *I){
printf("{");
while(I != NULL){
printf("%d",I->num);
I=I->next;
printf(",");
}
printf("}");
}
int main(){
printf("Enter size of L1:\n");
int n1,n2;
struct node*ptr1,*ptr2,*head1,*head2,*ptrUN,*ptrIN,*headUN,*headIN;
scanf("%d",&n1);
ptr1=createList(n1);
head1=ptr1;
printf("Enter size of L2:\n");

scanf("%d",&n2);
ptr2=createList(n2);
head2 =ptr2;
printf("L1 = ");
printlist(ptr1);
printf("\n");
printf("L2 = ");
printlist(ptr2);
ptrIN=(struct node*)malloc(n1*sizeof(struct node));
int k=0;
while(ptr1!=NULL){
while(ptr2!=NULL){
if(ptr1->num==ptr2->num){
ptrIN[k].num=ptr1->num;
ptrIN[k].next=&ptrIN[k+1];
k++;
}
ptr2=ptr2->next;
}
ptr1=ptr1->next;
ptr2=head2;
}
ptrIN[k-1].next=NULL;
headIN=&ptrIN[0];
printf("\n");
printf("L(Intersection)={");
if(k!=0){
while(headIN!=NULL){
printf("%d ,",headIN->num);
headIN=headIN->next;
}
printf("}");
}
else{
printf("{}");
}
ptr1 = head1;
ptr2=head2;


int arr[n1+n2];
for(int i=0 ; i<n1;i++){
arr[i]=ptr1->num;
ptr1=ptr1->next;
}
for(int i=n1 ; i<n1+n2;i++){
arr[i]=ptr2->num;
ptr2=ptr2->next;
}

int temp;
for(int i = 0 ; i<n1+n2-1;i++){
for(int j = 0;j< n1+n2-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}

}

}

ptr1=head1;
ptr2=head2;
ptrUN=(struct node*)malloc((n1+n2-k)*sizeof(struct node));
 int i,j,k2 =0;
for( i=0;i<n1+n2;i++){
for( j=0;j<i;j++){
if(arr[i]==arr[j])
 break;
}
if(i==j){
ptrUN[k2].num=arr[i];
k2++;
}

}
for(int i=0;i<k2;i++){
ptrUN[i].next=&ptrUN[i+1];
}
ptrUN[k2-1].next=NULL;
headUN=&ptrUN[0];

printf("\n");
printf("L(Union)={");

while(headUN!=NULL){
printf("%d ,",headUN->num);
headUN=headUN->next;
}
printf("}\n");


return 0;
}

