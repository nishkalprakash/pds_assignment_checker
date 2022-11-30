/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 4 
Description - 
*/


#include <stdio.h>
 
int main() {
   	int n ,a=1; scanf("%d",&n);
	for (int i = 1 ;i<=n;i++){
		for (int j = 0;j<i;j++){		
			if (a==1){
			printf("%d ",a);
			a=0;
			}else {
				printf("%d ",a);
				a=1;	
			}	
			

		}printf("\n");
		a=1;
	}		
    
}
