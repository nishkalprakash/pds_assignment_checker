/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 6
Description - Question 2 
*/


#include <stdio.h>
int gcd(int m,int n){
	if (m==n){
		return m;
	}else if (m>n){
		gcd (m-n,n);

	}
	else {
		gcd (m,n-m);
}
}
void coprime(int a ,int b){
	
	if (gcd(a,b)==1){
		printf("(%d , %d ) ,  ",a,b);
		
		
	}
	 
}
void pair(int arr[]){
	int a,b;
	printf("Coprime pairs \n");
	for (int i=0;i<5;i++){
		for (int j=4;j>i;j--){
			a=arr[i];
			b=arr[j];
			
			coprime(a,b);
		}
	}
}		






int main() {
   	int arr[5],p;
	for (int i=0;i<5;i++){                  // taking array1 input 
		scanf("%d",&arr[i]);
		p=arr[i];
		if (p<=0) {printf("Invalid enteries : all enteries should be poitive"); return 0; break;}
}	
	pair(arr);
    return 0;
    
    
}
