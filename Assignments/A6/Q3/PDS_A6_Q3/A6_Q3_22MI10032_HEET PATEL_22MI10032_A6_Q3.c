/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 6
Description : To merge two sorted arrays.
*/
#include<stdio.h>
int merge(int size1 ,int size2 , int *ptr1 ,int *ptr2,int*size3){//function
int size = size1+ size2;
int arr[size];
for(int i = 0 ; i < size1 ; i++){
  arr[i]=ptr1[i];
}
for(int i = size2-1 ; i < size2 ; i++){
  arr[i]=ptr2[i];
}

printf("%d",arr[3]);
return *ptr1+*ptr2;
}
int main(){ //main
printf("Enter the size of array 1 :\n");
int n;
scanf("%d",&n);
int *ptr1 , *ptr2;

/*for(int i=0;i<n;i++){
scanf("%d",ptr1 + i );
}*/

printf("Enter values:");
int arr[n];
for(int i = 0 ; i < n ; i++){
scanf("%d",&arr[i]);
}
printf("Enter the size of array 2 :\n");
int n1;
scanf("%d",&n1);
printf("Enter values:");
int array[n1];
for(int i = 0 ; i < n1 ; i++){
scanf("%d",&array[i]);
}
printf("A = ");
for(int i = 0 ; i < n ; i++){// print first array 
printf("%d ",arr[i]);
}
printf("\n");
printf("B = ");
for(int i = 0 ; i < n1 ; i++){// print second array
printf("%d ",array[i]);
}
printf("\n");
printf("C = ");
ptr1 =&arr[0];
ptr2 = &array[0];
int c = n + n1;
int arraymerge[c];
arraymerge[c]=merge(n,n1,ptr1,ptr2,c);

for(int i = 0 ; i < c ; i++){ // merge function call
printf("%d",arraymerge[i]);
}
}
