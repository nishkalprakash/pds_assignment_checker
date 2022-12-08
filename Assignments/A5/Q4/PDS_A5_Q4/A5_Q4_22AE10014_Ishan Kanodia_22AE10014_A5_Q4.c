/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 5
Description : 
*/

#include<stdio.h>

int main(){

int N,bins,min,max;
	printf("N = ");
	scanf("%d",&N);

int A[N];
int bin1[N];
int bin2[N];
int bin3[N];
int bin4[N];
int bin5[N];
int bin6[N];
int bin7[N];
int bin8[N];
int bin9[N];
int bin10[N];

	printf("A[N] = ");
	for (int i=0; i<=(N-1); i++){ 
	scanf("%d,", &A[i]);
	}

	printf("bins = ");
	scanf("%d",&bins);

	min = A[0];
	for (int i=1; i<N; i++){ 
		if (A[i] < min)
	min = A[i];
	}
	max = A[0];
	for (int i=1; i<N; i++){ 
		if (A[i] >max)
	max = A[i];
	}
	int ccc = (max-min+1)/bins;
	printf("Range = (%d,%d) ",min,max);

	for(int i=0;i<=N-1;i++){
		if (A[i]>=min && A[i]<=ccc)
			bin1[i]=A[i];
		else if (A[i]>=ccc+1 && A[i]<=2*ccc)
			bin2[i]=A[i];
	}
return 0;
}
