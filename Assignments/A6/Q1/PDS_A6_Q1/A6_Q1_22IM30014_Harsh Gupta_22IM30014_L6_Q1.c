/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 6 
Description - 
*/


#include <stdio.h>
#define ll long long int
ll print_term(int k){        // creating the function 
	if (k==0||k==1||k==2){
	return k;
}	else {
	return (3*print_term(k-1)*print_term(k-2)) - (2*print_term(k-2)*print_term(k-3)) +1;}   // using the formula 
}

int main() {
	
	int n;
	scanf("%d",&n);                                            //taking  input as no. of term 
	for (int i=0;i<n;i++){
		printf("%lld ",print_term(i));                   // calling function for each term 
}			   	

	
    return 0;
    
    
}
