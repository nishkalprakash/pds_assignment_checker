/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 6
Description : Program to check for coprime numbers*/
#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int* Union;
int* Intersection;

void create_array(int* p, int n){  //function to create array
	for(int i=0;i<n;i++) scanf("%d", p+i);
	return;
}

int* BuildSet(int* A, int n){
	int* t;
	*t=(int*)malloc(sizeof(int));
	*t=n
	A=(int*)malloc(n*sizeof(int));
	create_array(A, n);
	return t;
}

int SearchSet(int* A, int x){
	int flag=0
	for(int i=0; i<size; i++) if(A[i]==x) flag=1;
	return flag;
}

int* Union(int* A, int a, int* B, int b, int* union_size){
	
}

int* Intersection(int* A, int a, int* B, int b, int* inter_size){
	k=0
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if (A[i]==B[j]) if (!SearchSet(Intersection, A[i]) Intersection[k++]=A[i];
		}
	}
	return Intersection;
}

int* Difference(int* A, int a, int* B, int b, int* diff_size){
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if(!SearchSet(B, A[i]) printf("%d ", A[i]);
		}
	}
}

int main(){
	int*A;
	int*B;
	scanf("%d", &a);
	BuildSet(A, a);
	scanf("%d", &b);
	BuildSet(B, b);
	scanf("%d", &inp;
}
