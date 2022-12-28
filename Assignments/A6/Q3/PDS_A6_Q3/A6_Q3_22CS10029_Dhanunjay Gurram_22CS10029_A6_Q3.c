/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:6
  Description:Printing the merged arrays*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2,i,num,*p1,*p2;
    printf("Enter size: ");
    scanf("%d",&n1);
    p1=(int *)malloc(n1*sizeof(int));
    printf("\nEnter values: ");
    for (i=0;i<n1;i++){
       scanf("%d",&num);
       p1[i]=num;}
    printf(" \n");
    printf("Enter size: ");
    scanf("%d",&n2);
    p2=(int *)malloc(n2*sizeof(int));
    printf("\nEnter values: ");
    for (i=0;i<n2;i++){
      scanf("%d",&num);
      p2[i]=num;}
    printf("A = ");
    for (i=0;i<n1;i++){
      printf("%d ",p1[i]);}
    printf(" \nB = ");
    for (i=0;i<n2;i++){
      printf("%d ",p2[i]);}
    printf(" \n");
    int Merge(int,int,int *,int *);
    Merge(n1,n2,p1,p2);
}
int Merge(int n1,int n2,int *p1,int *p2){
    int i=0;
    printf("C = ");
    while(1){
       if (*p1<*p2) {
          if (*p1==0) {printf("%d ",*p2);
                       p2++;}
          else {printf("%d ",*p1); 
                p1++;}
                      }
       else if (*p1>=*p2){
          if (*p2==0) {printf("%d ",*p1); 
                       p1++;}
          else {printf("%d ",*p2); 
                p2++;}}
       i++; 
       if (i==n1+n2) {break;}}
    printf("\n ");
}
