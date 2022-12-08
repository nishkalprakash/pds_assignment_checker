/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 5 
Description - question1
*/
int a ,b;
int flag=1;
#include <stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
	if (a>b){
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
	int rem=1;
	while (rem!=0){
		rem=b%a;
		b=a;
		a=rem;			
	}	
	return b;

}
void coprime(int a ,int b){
	
	if (gcd(a,b)==1){
		printf("%d and %d are Co-Prime\n",a,b);
		flag=0;
		
	}
	 
}
void pair1(int arr[5]){
	for (int i=0;i<5;i++){
		for (int j=i+1;j<5;j++){
			a=arr[i];
			b=arr[j];
			coprime(a,b);
		}

	}

}



int main(){    
	int arr[5];
	for (int i=0;i<5;i++){
		scanf("%d",&arr[i]);

	}
	pair1(arr);
	if (flag==1) printf("No Co-Prime found\n");


return 0 ;

}
