
/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 6
SORT AND MERGE
*/

#include<stdio.h>

int main()
{
int size1,size2;
int size3;
int a1,b1,c1;
int temp;
int A[size1];
int B[size2];
printf("enter size of 1st array");                      //gets input for size and values
scanf("%d",&size1);
printf("enter numbers for first array");
for(a1=0;a1<size1;a1++){
scanf("%d",&A[a1]);}



printf("enter size of 2nd array");
scanf("%d",&size2);
printf("eneter numbers for second array");
for(b1=0;b1<size2;b1++){
scanf("%d",&B[b1]);}


printf("A[]=");                                      //prints the inputed values
for(a1=0;a1<size1;a1++){
printf("%d ",A[a1]);}
printf("\nB[]=");
for(b1=0;b1<size2;b1++){
printf("%d ",B[b1]);}

int h;                                             //merges both A and B in C
h=size1+size2;
int C[h];
for(c1=0,a1=0;c1<size1&&a1<size1;c1++,a1++){
C[c1]=A[a1];
}
for(c1=(size1),b1=0;c1<h;c1++,b1++){
C[c1]=B[b1];
}

int r;
for(r=1;r<=h;r++){                                    //sorts C
for(c1=0;(c1+1)<h;c1++){
if(C[c1]>C[c1+1]){
temp=C[c1];
C[c1]=C[c1+1];
C[c1+1]=temp;}
}}




printf("\nC[]:");
for(c1=0;c1<h;c1++){
printf("%d ",C[c1]);}


return 0;

}
































