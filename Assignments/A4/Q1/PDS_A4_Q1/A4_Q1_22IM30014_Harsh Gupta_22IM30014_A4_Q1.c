/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 4 
Description - 
*/


#include <stdio.h>
 
int main() {
   	int n ; scanf("%d",&n);
	if (n>0){for (int i = 1 ; i<=n;i++){
		if (n%i==0){
			printf("%d ",i);
       		}
	}
	}else if (n==0){
		printf("%d",0);
	}else{
		n = (-n);
		for (int i = 1 ; i<=n;i++){
		if (n%i==0){
			printf("%d ",i);
       		}
	}		
}		
    
}
