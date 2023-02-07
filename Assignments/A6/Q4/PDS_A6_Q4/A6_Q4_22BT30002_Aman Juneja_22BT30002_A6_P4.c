	/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to find sum of series using functions fact(n) and power(x,n)
*/

#include<stdio.h>
#include<stdlib.h>

void Print(int *A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}

int *BuildSet(int * A,int n){
	printf("enter the elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	return A;
}

int SearchSet(int *A,int x){
	int p,flag=0;
	int n=(sizeof(A)/sizeof(int));
	for(int i=0;i<n;i++){
		if(A[i]==x){
			p=x;
			flag=1;		
		}
	}
	if(flag=0){
		
		return -1;
	}	
	else return p;
}

int *Union(int *A,int a,int *B,int b,int *union_size){
	
}

int *Intersection(int *A,int a,int *B,int b,int* inter_size){
	int C[a+b],common=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(A[i]==B[j]){
				C[common]=A[i];
				common++;
			}
		}
	}
}

int *Difference(int *A,int a,int *B,int b){

}

int main(){

        int n1,n2;
        printf("

	while(1){

		printf("press '1' to perform search in set A\n");
		printf("press '2' to perform search in set B\n");
		printf("press '3' to perform union of Set A and Set B\n");
		printf("press '4' to perform intersection of Set A and Set B\n");
		printf("press '5' to perform Difference of Set A and Set B\n");
		printf("Press any other key to quit\n");
		int ch;
		printf("enter choice");
		scanf("%d",&ch);
		if(ch==1){
			int x;
			printf("enter element to be searched ");
			scanf("%d",&x);
			SearchSet(A,x);
		}
		else if(ch==2){
			int y;
			printf("enter element to be searched ");
			scanf("%d",&y);
			SearchSet(B,y);
			
		}
else if(ch==3){
        int 
}
		
				
		
	}
	return 0;
}
