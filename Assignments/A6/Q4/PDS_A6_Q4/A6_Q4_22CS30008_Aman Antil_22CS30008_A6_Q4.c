/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 6
Description : Program to analyse sets
*/
#include<stdio.h>
#include<stdlib.h>
int* buildset(int n, int*count){
	int* p;
	int counter=1;
	int A[n];
	p=&A[0];
	scanf("%d", p);
	for(int i=0;i<n-1;i++){
		int t, flag;
		scanf("%d", &t);
		for(int j=0;j<counter;j++){
			if(t==*(p+j)){
				flag=1;
				break;
			}
			else flag=0;
		}
		if(flag==0){
			*(p+counter)=t;
			counter++;
		}

	}
	*count=counter;
	return p;
}
int searchset(int* A, int x, int limit){
	int j=1;
	for(int i=0; i<limit;i++){
		if(x==A[i]){
			j=0;
			break;}
	}
	return j;
	
}
// int* Union(int *a, int*b, int count1, int count2){
// 	int*p;

// }
int main(){
	int n1, n2, c1, c2, key=1;
	int* k1;
	int* k2;
	printf("Number of entries in A : ");
	scanf("%d", &n1);
	printf("A : ");
	k1=buildset(n1, &c1);
	printf("Number of entries in B : ");
	scanf("%d", &n2);
	printf("B : ");
	k2=buildset(n2, &c2);
	while(1){
		printf("-- Press 1 to perform search in Set A\n-- Press 2 to perform search in Set B\n-- Press 3 to perform union of set A and B\n-- Press 4 to perform intersection of set A and B\n--Press 5 to perform difference of set A and B\n--Press any other key to quit\n");
		scanf("%d", &key);
		if(key==1){
			int x;
			scanf("%d", &x);
			if(searchset(k1,x,n1)) printf("%d is NOT present in set A", x);
			else printf("%d is present in set A", x);
		}
		else if(key==2){
			int x;
			scanf("%d", &x);
			if(searchset(k2,x,c2)) printf("%d is NOT present in set B", x);
			else printf("%d is present in set B", x);
		}
		else break;
		
	}
	return 0;

}