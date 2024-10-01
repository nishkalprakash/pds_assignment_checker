//Program to find pairs of co-prime no. in an array
//Program Creator: Pratibha Shakya
//Roll no. : 24NA10050

#include<stdio.h>

int gcd(int a, int b){

	int i,temp,g;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	
	for(i=1;i<b;i++){
		if(b%i==0 && a%i==0)
			g=i;
		else
			g=1;
	}
	
	return g;
}

void CoPrime(int a, int b){
	
	if(gcd(a,b)==1)
		printf("%d and %d are Co-Prime \n", a, b);
}

int main(){

	int arr[5], i, j, k;
	for(i=0;i<5;i++)
		scanf("%d", &arr[i]);
		
	j=0;
	k=1;
	for( ; j<4; j++){
		for( k=k; k<5; k++){
			CoPrime(arr[j],arr[k]);
		}
		k++;
		printf("%d", j);
	}
	
	return 0;
}
	
