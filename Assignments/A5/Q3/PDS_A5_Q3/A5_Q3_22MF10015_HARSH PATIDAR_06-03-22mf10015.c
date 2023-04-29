//NAME : HARSH PATIDAT
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 3
//DESCRIPTION ;

//a
 #include<stdio.h>
 void swap(int p , int q);
 int main (){
 int p ,q;
 printf("enter p and q ");
 scanf("%d,%d",&p,&q);



//b
int main (){
int n ;
 int element [n];
 int i;

 printf("enter the number");
 scanf("%d",&n);


 for (i=0;i<(n-1);i++){
    printf("enter the element = ");
 scanf("%d",&element[i]);
 }
 swap(p,q);
 return 0 ;
 }
 void swap(int p , int q){

 printf("%d,%d",q,p);
 return ;
}
