/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 6
 Question No :3
 Description :program to merge two sorted arrays
*/

#include <stdio.h>
#include <stdlib.h>

int* Merge(int size1,int size2,int *ptr1,int *ptr2)
{
	int size3=size1+size2;
	int *ptr3;
	ptr3=(int*)malloc(size3*sizeof(int));

	int k1,k2,k3;
	k1=k2=k3=0;
	do{
        int a=ptr1[k1];//smallest rem element of ptr1
        int b=ptr2[k2];//smallest rem element of ptr2
        if(a<b)
        {
        	
        	ptr3[k3]=a;
        	k3++;
        	if(k1<size1)
        	k1++;
        }
        else
        {
        	ptr3[k3]=b;
        	k3++;
        	if(k2<size2)
        	k2++;
        }
	}while(k3<size3);//end of do-while loop
  return ptr3;
}

int main(){
	int *A,*B,*C;
	int l1,l2,i;

	printf("Enter size:");
	scanf("%d",&l1);
    A=(int*)malloc(l1*sizeof(int));
    printf("Enter values" );
    for ( i = 0; i< l1; i++) //loop for storing A
      scanf("%d",&A[i]);

  printf("Enter size:");
	scanf("%d",&l2);
    B=(int*)malloc(l2*sizeof(int));
    printf("Enter values" );
    for ( i = 0; i< l2; i++) //loop for storing B
      scanf("%d",&B[i]);

  printf("\n A = ");
  for ( i = 0; i< l1; i++) //loop for printing A
      printf("%d",A[i]);

  printf("\n B = ");
  for ( i = 0; i< l2; i++) //loop for printing A
      printf("%d",B[i]);
  
   C = Merge(l1,l2,A,B);
  
 printf("\n C = ");
  for ( i = 0; i< l1+l2; i++) //loop for printing A
      printf("%d",C[i]);
  
 
 return 0;
}//end 0f main