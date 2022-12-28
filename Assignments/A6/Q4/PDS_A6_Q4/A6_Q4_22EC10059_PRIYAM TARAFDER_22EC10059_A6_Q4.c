/* 	NAME: PRIYAM TARAFDER
	SECTION:14
	QUESTION NO.: 4
	to do operations on 2 sets*/
#include <stdio.h>
#include <stdlib.h>
void Print(int *A, int n){
	for(int t=0;t<n;t++)
		printf("%d",&A[t]);
}
int* BuildSet(int *A, int n){
	A=(int *)malloc(n*sizeof(int));
	for(int t=0;t<n;t++)
		scanf("%d",&A[t]);
	return A;
}
int SearchSet(int *A,int x, int n){
	for(int t=0;t<n;t++)
		if(A[t]==x)
			return 1;
	return 0;
}
int* Union(int *A,int *B,int a, int b, int *union_size){
	int *ptr3=(int *)malloc((a+b)*sizeof(int)); *union_size=a;
	for(int t=0;t<a;t++)
		ptr3[t]=A[t];
	for(int t=0;t<b;t++)
		if(!SearchSet(A,B[t],a)){
		ptr3[a+t]=B[t]; *union_size=*union_size+1;
	}
	return ptr3;
}
int* Intersection (int *A, int a, int *B, int b,int *inter_size){
	int *ptr3=(int *)malloc((a+b)*sizeof(int));*inter_size=0;
	if(b<a)
		for(int t=0;t<b;t++)
		if(SearchSet(A,B[t],a)){
			ptr3[t]=B[t];*inter_size=*inter_size+1;
		}
	else
		for(int t=0;t<a;t++)
		if(SearchSet(B,A[t],b)){
			ptr3[t]=A[t];*inter_size=*inter_size+1;
		}
	return ptr3;
}
int* Difference(int *A, int a, int *B, int b, int *diff_size){
	int *ptr3=(int *)malloc((a+b)*sizeof(int));*diff_size=0;
	for(int t=0;t<a;t++)
		if(!SearchSet(B,A[t],b)){
			ptr3[t]=A[t];*diff_size=*diff_size+1;
		}
	return ptr3;
}
int main(){
	int *A,*B,a,b,x,*C,*union_size,*inter_size, *diff_size;
	int q=0; int r=0; int c=a+b;
	union_size=&c;
	inter_size=&q;
	diff_size=&r;
	scanf("%d",&a);
	printf("A= ");
	A=BuildSet(A,a);
	scanf("%d",&b);
	printf("B= ");
	B=BuildSet(B,b);
	while(1){
		int t;
		scanf("%d",&t);
		if(t==1){
			scanf("%d",&x);
			if(SearchSet(A,x,a)
				printf("%d is present in set A",x);
			else
				printf("%d is NOT present in set A",x);
		}else if(t==2){
			scanf("%d",&x);
			if(SearchSet(B,x,b)
				printf("%d is present in set B",x);
			else
				printf("%d is NOT present in set B",x);	
		}else if((t==3){
			printf("Union: ");
			C=Union(A,B,a,b,union_size);
			for(int t=0t<union_size;t++)
				printf("%d",C[t]);
		}else if((t==4){
			printf("Intersection: ");
			C=Intersection(A,B,a,b,inter_size);
			for(int t=0t<inter_size;t++)
				printf("%d",C[t]);
		}else
			break;
	}
}
			
	
