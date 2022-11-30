/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 4 
Description - 
*/


#include <stdio.h>
 
int main() {
   	int n,a,sum=0 ; scanf("%d",&n);
	if (n>=0){
		while (n>0){
			a= n%10;
			sum = sum+a;
			n = (n-a)/10;		
		}printf("%d",sum);    
	}else{
		n = (-n);
		while (n>0){
			a= n%10;
			sum = sum+a;
			n = (n-a)/10;		
		}printf("%d",-sum);
	}
}
