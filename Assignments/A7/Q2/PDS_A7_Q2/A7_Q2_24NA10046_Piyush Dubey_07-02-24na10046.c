#include<stdio.h>


int gcd(int  a,int b){
	//using eucledean theorem
	while(a!=0&&b!=0){
		if(a>b) a=a%b;
		else b=b%a;
	}
	if(a==0) return b;
	else return a;
}

void CoPrime(int a,int b){
	int c = gcd(a,b);
	if(c==1){
	printf("%d and %d are Co-Prime \n",a,b);
	}
}

void pair(int a[]){
	int flag=0;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			CoPrime(a[i],a[j]);
			if(gcd(a[i],a[j])==1){
				flag = 1;
			}
		}
	}
	if(flag == 0){
		printf("No Co-Prime found \n");
	}
}

int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	pair(arr);
return 0;
}


