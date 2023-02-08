#include<stdio.h>
#include<stdlib.h>

typedef struct set{
	int data;
	int *next;
}set;

int main(){
	int p, q;
	printf("Enter number of elements in the first list: \n");
	scanf("%d", &p);
	printf("Enter number of elements in the second list: \n");
	scanf("%d", &q);

	printf("first set\n");

	set A[p];
	int i=0;
	while(i<p){
		int flag=0;
		scanf("%d", &A[i].data);
		A[i].next=&(A[i+1].data);
		for(int x=0; x<i; x++){
			if(A[i].data==A[x].data){
				flag=1;
			}
		}
		//printf("for %d Flag is %d\n", i, flag);
		if(flag==1){
			//printf("%d\n");
			continue;
		}
		i++;
	}
	printf("second set");
	set B[q];
	int j=0;
	while(j<q){
		int flag=0;
		scanf("%d", &B[j].data);
		B[j].next=&(B[j+1].data);
		for(int x=0; x<j; x++){
			if(B[j].data==B[x].data){
				flag=1;
			}
		}
		//printf("for %d Flag is %d\n", i, flag);
		if(flag==1){
			//printf("%d\n");
			continue;
		}
		j++;
	}
	set C[p*q];
	int t=0;
	for(int r=0; r<p; r++){
		for(int s=0; s<q; s++){
			C[t].data=A[r].data+B[s].data;
			C[t].next=&C[t+1].data;
			t++;
		}
	}
	printf("L1 is\n(");
	for(int i=0; i<p; i++){
		printf("%d, ", A[i].data);
	}
	printf(")\n");
	printf("L2 is\n(");
	for(int j=0; j<q; j++){
		printf("%d, ", B[j].data);
	}
	printf(")\n");
	printf("L is\n(");
	for(int t=0; t<(p*q); t++){
		printf("%d, ", C[t].data);
	}
	printf(")");













	return 0;
}
