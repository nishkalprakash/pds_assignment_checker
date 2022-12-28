/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:5
desc:printing the merged arrays */
#include<stdio.h>
#include<stdlib.h>
int main(){
   int m1,n2,*p1,*p2,i,num;
   printf("Enter the size:");
   scanf("%d",&m1);
p1=(int *)malloc(m1*sizeof(int));
scanf("%d",&n2);
p2=(int *)malloc(n2*sizeof(int));
   printf("\n Enter values: ");
   for(i=0;i<n2;i++){
   scanf("%d",&num);
   p2[i]=num;}
 printf("A= ");
 for(i=0;i<m1;i++){
  printf("%d",p1[i]);}
  printf("\nB= ");
  for(i=0;i<n2;i++){
  printf("%d",p2[i]);}
  printf("\n");
  int merge(int,int,int*,int*);
  merge(m1,n2,p1,p2);
}
int merge(int m1,int n2,int *p1,int *p2){
  int i=0;
  printf("C= ");
 while(1){
if(*p1<*p2){
if(*p1==0) {printf("%d",*p2);
 p2++;}
else {(printf("%d",*p1);
p1++;}
}
else if(*p1>=*p2){
if(*p2==0) {printf("%d",*p1); 
            p1++;}
else{printf("%d",*p2);
            p2++;}}
i++;
if(i==m1+n2) { break;}}
printf("\n");
}
