/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 5 
Description - question1
*/

#include <stdio.h>
#include<stdlib.h>

int main(){      
       int n,bin,m1=100,m2=1; // m1 = min , m2 = max
	printf("N = ");
	scanf("%d",&n);
	
	int arr[n];
	printf("A[N] = ");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf(" Bins = ");
	scanf("%d",&bin);
	for(int i=0;i<n;i++){
		if (m1>arr[i]) m1 = arr[i];
		if (m2<arr[i]) m2 = arr[i];
	}
	
	int bin1[n],a=0;
	for (int i =0;i<n;i++){
		bin1[i]=0;
		if (arr[i]<(m2/bin)+m1){ bin1[i]=arr[i]; a++;}
	}printf("bin1:> ");
	for (int i =0;i<n;i++){
		
		if (bin1[i]!=0){
			printf("%d,",bin1[i]);
		}
		
	}printf("      element = %d",a);

	
	
	
	
	





return 0 ;

}
