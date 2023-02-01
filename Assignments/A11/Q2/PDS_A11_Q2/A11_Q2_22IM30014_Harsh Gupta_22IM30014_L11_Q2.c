/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 10
Description - 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
int k=0,n,a;
int callme(int n){               // function for recursion
	if (n==0){
		return 0;
	}else if(n==1) {
		return 1;
	}
		else {
		return callme(n-1)+callme(n-2);
		
	}
}

int main() {
	                      // taking size of list 
	scanf("%d",&n);
	
	for(int i=0;i<13;i++){
		if(n==callme(i)){
			k=1;
			break;
		}
	}                            
	if (k==1) printf("YES");										
	else printf("NO");

    return 0;
    
    
}