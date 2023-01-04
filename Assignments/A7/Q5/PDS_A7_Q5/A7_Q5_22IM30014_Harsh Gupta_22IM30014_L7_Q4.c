/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 7 
Description - 
*/
#include <stdio.h>

	
int main(){
	int n,m=0;                             
	scanf("%d",&n);                         // taking the size of array
	int arr[n],temp;
	for (int i=0;i<n;i++){                  // taking array input 
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){
		int hash =1;
		for (int j=0;j<i;j++){            // checking for left 
			if (arr[i]<arr[j]) {m++;hash=0;break;}
			
		}
		if (hash==1){                    // checking for right 
		for (int j=i+1;j<n;j++){
			if (arr[i]>arr[j]) {m++;break;}
			
		} }
	}
	
	printf("Out of order : %d ",m);                         // printing the out of order 
	return 0;
    
    
}
