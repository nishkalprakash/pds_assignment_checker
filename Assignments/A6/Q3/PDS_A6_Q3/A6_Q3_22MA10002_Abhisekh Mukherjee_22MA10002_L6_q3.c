/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:6
q:3
description:
*/
#include<stdio.h>
int* merge(int s1,int s2,int *ptr1,int *ptr2); // declaring the functions

int main()
{
  int a,b;
  printf("enter the size of 1st array\n");
   scanf("%d",&a);
  printf("enter the size of 2nd array\n");
scanf("%d",&b);
int A[a],B[b],C[a+b];
for(int i=0;i<a;i++){
scanf("%d",&A[i]);   // reading the array A
}

for(int i=0;i<b;i++){
scanf("%d",&B[i]);   // reading the array B
}
 printf("A is\n");
for(int i=0;i<a;i++){
printf("%d\t",A[i]);
}
printf("B is\n");
for(int i=0;i<b;i++){
printf("%d\t",B[i]);
}



printf("the output array is\n");
for(int i=0;i<a;i++){
 for(int j=0;j<b;j++){
for(int k=0;k<a+b;k++){
       C[k]=  *merge(a,b,*(A+i),*(B+j));   // pointing to array
  

}
}
}
for(int i=0;i<a;i++){
  printf("%d",C[i]);  // PRINTING THE OUTPUT array
}



return 0;
}
int* merge(int s1,int s2,int *ptr1,int *ptr2){   // define the merge funcion
int d;
if(*ptr1 >= *ptr2){
d=*ptr2;
  return d;
 
}
if(*ptr2 > *ptr1){
d=*ptr1;
return d;
}




}







