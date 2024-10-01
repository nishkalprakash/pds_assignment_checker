#include <stdio.h>
// FUNCTION TO COUNT GCD
int gcd(int a,int b){
 	int temp;
 	if (a > b) {
		temp = a;
		a = b;
		b = temp;
 		}
 	while ((b%a)!= 0) {
		temp = b%a;
		b=a;
		a=temp;
 		}
 	return a;
 	}
 // MAIN FUNCTION
 int main(){
 	int a[5],i,j;
 	int x;
 	for (i=0;i<5;i++){
 		scanf("%d",&a[i]);
 		}
 	
 	for (i=0;i<5;i++){
 		for (j=0;j<i;j++){
 			x=gcd(a[i],a[j]);
 			if (x=1) {printf("%d and %d are co prime \n",a[i],a[j]);}
 			else {printf("%d and %d are not co prime \n",a[i],a[j]);}
 			}
 
			}
return 0;
 }
 			
 		
