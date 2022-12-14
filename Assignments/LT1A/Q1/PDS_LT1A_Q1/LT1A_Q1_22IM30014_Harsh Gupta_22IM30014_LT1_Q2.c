/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
LAb test - 1 
Description - Question 2 
*/


#include <stdio.h>
 
int main() {
   	int n;
	scanf("%d",&n);
	if (n>1){
		for (int i = 1 ; i<=n;i++){
			int sum=0;
			for (int j = 1 ; j<i;j++){
				if (i%j==0){
					sum=sum+j;     // adding every divisor in sum
					
       				}
			}
			if (sum==i) printf("%d ",i);   // if sum becomes equals to i 
		}
	}
	else printf("Invalid Output"); 
    return 0;
    
    
}
