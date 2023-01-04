/* 	NAME: PRIYAM TARAFDER
	ROL NO.: 22EC10059
	ASSIGNMENT NO.: 7
	QUESTION NO.: 3
	finds number of elements that are out of order in an array
*/
#include <stdio.h>
int order_less(int x, int t, int a[]){
	for(int i=0;i<t;i++)
		if(x<a[i])	//checks if element is out of order
			return 1;
	return 0;
}
int order_more(int x, int t, int n, int a[]){
	for(int i=t;i<n;i++)
		if(x>a[i])	//checks if element is out of order
			return 1;
	return 0;
}
int main(){
	int n,a[10],c=0;
	scanf("%d",&n);
	for(int t=0;t<n;t++){
		scanf("%d",&a[t]);	//takes inputs from user
	}
	for(int i=0;i<n;i++){
		if(order_less(a[i],i,a)||order_more(a[i],i,n,a))	
			c++;	//counts number of elements out of order
	}
	printf("Out of order: %d",c);
}//end of main method
				
