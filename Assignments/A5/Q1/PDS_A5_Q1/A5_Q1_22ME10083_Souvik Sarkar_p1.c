/*roll no. 22ME10083
Assignment 5
sec 14*/
#include<stdio.h>

int fact(int n){
	int prod =1;
	for(int i=1;i<=n;i++){
		prod=prod*i;
    	}
    	n=prod;
return n;	
}

int power ( int x, int n){
	int s=1;
	for(int j=1;j<=n;j++){
		s=s*x;
		}
	x=s;	
return x;
}

void main(){
	// calling varriables
	int x,n;
	float sum;
	// Taking inputs
	printf("Enter the value of x and n:\n");
	scanf("%d %d",&x,&n);
	// Logic
	for(int k=0;k<=n;k++){
		sum = ((float)power(x,n))/((float)fact(n));
	}
	// Result
	printf("sum of the sereies is %f",sum);
}



