/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 6
 Description : performing specific operations on sets
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int flag=0;
int* buildset(int* A,int n){
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
}
int SearchSet(int* A, int x){
	for(int i=0;i<n;i++){
		if(A[i]==x){
			flag=1;
		}
	}
}

int* merge(int *A, int a, int *B,int b,int *merge_size){
	for(int i=0;i<a;i++){
		merge_size[i]=A[i];
	}
	for(int i=a;i<a+b;i++){
		merge_size[i]=B[i-a];
	}
	int temp;
	for(int i=0;i<a+b;i++){
		for(int j=i+1;j<a+b;j++){
			if(merge_size[i]<=merge_size[j])continue;
			else {
				temp=merge_size[i];
				merge_size[i]=merge_size[j];
				mergen_size[j]=temp;
			}
		}
	}
	for(int i=0;i<a+b;i++){
		printf("%d ",merge_size[i]);
	}
}
int* intersection(int *A, int a, int *B,int b,int *inter_size){
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(A[i]==B[j]){
				inter_size=inter_size+{
	}
		
int main(){
	char p;
	scanf("%c",&p);
	switch(p){
	case 1:

