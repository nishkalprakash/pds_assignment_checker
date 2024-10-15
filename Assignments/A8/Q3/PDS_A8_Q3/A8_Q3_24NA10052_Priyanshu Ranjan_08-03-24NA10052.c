#include <stdio.h>
#include <math.h>

int main(){
	//initialising values
	int n;
	//taking n
	printf("n=");
	scanf("%d",&n);
	
	int a[n];
	//taking input of array 
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
	//checking both combination
		int m=0;
		int z=a[i];
		while(z>0){
		z=z/10;
		m+=1;}
		int p=(a[i])+((a[i+1])*pow(10,m));
		int n=0;
		z=a[i+1];
		while(z>0){
		z=z/10;
		n+=1;}
		int q =(a[i+1])+((a[i])*pow(10,n));
		printf("%d and %d \n",p,q);
		//if p>q leave if q>p swap..
	}
	
	
}
