//NAME : HARSH PATIDAR
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 2
//DESCRIPTION ;


#include<stdio.h>
struct vector {
   int n ;
    int *ptr;
}a,b;
int main(){
printf("enter");
int k , i ;
printf("enter dimension of vector\n");
scanf("%d",&a.n);
printf("enter components of vector");
a.ptr=(int*)malloc(a.n*sizeof(int));

for( k=0; k<a.n;k++){
    scanf("%d",&a.ptr[k]);

}


printf("enter dimension of vector\n");
scanf("%d",&b.n);
printf("enter components of vector");
b.ptr=(int*)malloc(b.n*sizeof(int));

for( k=0; k<b.n;k++){
    scanf("%d",&b.ptr[k]);

}
return 0;
}
