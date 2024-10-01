#include<stdio.h>


//making the power function
int power(int x,int n){
	int keep=1;//var to temporary store the value for the given loop 
	//keep is used to return the value
	for(int i=1;i<n;i++){
		keep = keep * x;
	}
	return keep;
}


//Making the fact function to calculate factorial
int fact(int n){
	int store=1;//var to temporary store the value for the given loop 
	//keep is used to return the value
	for(int i=1;i<n;i++){
		store = store * i;
	}
	return store;
}



int main(){
	int x,n;
	float temp=0;
	scanf("%d%d",&x,&n);//to get the values of x and n
	for(int i=1;i<=n;i++){
		float a = power(x,i);
		float b = fact(i);
		float c = a/b;
		temp = temp + c;
	}
	printf("%f",temp);
	
	return 0;
}
