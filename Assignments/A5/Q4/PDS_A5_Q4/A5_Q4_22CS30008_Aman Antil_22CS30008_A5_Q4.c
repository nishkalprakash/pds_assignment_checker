/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 5
Description : Program to devide numbers in eq intervals.
*/
#include<stdio.h>
int main(){
	int N, bn;
	float rg;
	int mx=0, mn;
	printf("Enter number of terms : ");
	scanf("%d", &N);
	int A[N];
	printf("Enter terms : ");
	for(int i=0;i<N;i++) scanf("%d", &A[i]);
	printf("Enter number of bins : ");
	scanf("%d", &bn);
	int B[bn];
	for(int i=0;i<N;i++) if(A[i]>mx) mx=A[i];//finding max no.
	mn=mx;
	for(int i=0;i<N;i++) if(A[i]<mn) mn=A[i];//finding min no.
	rg=(float)(mx-mn)/bn;
	for(int i=0; i<bn-1; i++){
		printf("bin%d-> ", i+1);
		B[i]=0;
		for(int j=0;j<N;j++){
			if(A[j]>=mn+(i*rg)&&A[j]<mn+(i+1)*rg){
				printf("%d, ", A[j]); 
				B[i]++;
			}
		}
	printf("Elems = %d\n", B[i]);
	}
	printf("bin%d-> ", bn);
	int count=0;
	for(int j=0;j<N;j++){
			if(A[j]>=mn+(bn-1)*rg){
				printf("%d, ", A[j]); 
				count++;
			}
		}
		printf("Elems = %d", count);
	return 0;
}